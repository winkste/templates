""" pytest module for template module.

This module defines the tests for the main.py module. Further explains of
pytest and unit tests can be found here in this video (german):
https://youtu.be/db2Iq2JHwiQ
https://docs.pytest.org/en/7.2.x/
https://docs.pytest.org/en/7.2.x/getting-started.html#get-started
https://docs.python.org/3/library/unittest.html


This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program. If not, see <http://www.gnu.org/licenses/>.
"""

__author__ = "One solo developer"
__authors__ = ["One developer", "And another one", "etc"]
__contact__ = "mail@example.com"
__copyright__ = "Copyright $YEAR, $COMPANY_NAME"
__credits__ = ["One developer", "And another one", "etc"]
__date__ = "YYYY/MM/DD"
__deprecated__ = False
__email__ =  "mail@example.com"
__license__ = "GPLv3"
__maintainer__ = "developer"
__status__ = "Production"
__version__ = "0.0.1"

################################################################################
# Imports
from unittest import mock
import pytest
from sources.main import add, devide, play_random
from sources.main import TemplateClass, print_me, is_flat, sum_list

################################################################################
# Test Functions
@pytest.mark.parametrize("input1, input2, expected", [(1, 4, 5), (5, 3, 8), (6, 3, 9)])
def test_add(input1, input2, expected):
    """Test the add function.
    """
    result = add(input1, input2)
    assert result == expected

def test_devide():
    """Test the divide function including ZeroDevisionError.
    """
    result = devide(8, 2)
    assert result == 4
    with pytest.raises(ZeroDivisionError):
        assert devide(10, 0)

@mock.patch("sources.main.randint", return_value=7)
def test_play_random(mocked_randint):
    """Test the play random function. It demos the mock
        feature to test static against 7 and not a random.
    """
    result = play_random()
    assert result == "big"

def test_print_me(capsys):
    """Test the print_me function. It demos the capturing of
        the standard output using capsys.
    """
    print_me()
    capture = capsys.readouterr()
    assert capture.out == "Hello\n"

def test_is_flat(my_data):
    """Test the play is_flat function. It demos the usage
        of predefined data in conftest.py
    """
    assert is_flat(my_data) is True

@pytest.mark.parametrize("in_val, expected", [([1, 2, 3], True), ([1, [1, 2], 3], False)])
def test_is_flat2(in_val, expected):
    """Test the is_flat function. It demos the usage
        of predefined data.
    """
    assert is_flat(in_val) == expected

def test_sum_list(my_data):
    """Test the sum_list function. It demos the usage
        of predefined data in the conftest.py module
    """
    assert sum_list(my_data) == 10

#def test_logger_example(capsys):
#    logger_example()
#    capture = capsys.readouterr()
#    assert "This is a critical message\n" in capture.out

def test_template_class1():
    """Test the template class generation.
    """
    inst = TemplateClass()
    assert inst.get_object_name() == "DefaultObject"

@pytest.mark.parametrize("in_val, expected", [("Test", "Test"), ("NEW", "NEW")])
def test_template_class2(in_val, expected):
    """Test the template class methods with predefined data.
    """
    inst = TemplateClass()
    assert inst.get_object_name() == "DefaultObject"
    inst.set_object_name(in_val)
    assert inst.get_object_name() == expected

def test_template_class3():
    """Test the template class with a mock of a class method.
    """
    inst = TemplateClass()
    inst.something = mock.MagicMock()
    inst.method()
    inst.something.assert_called_once_with(1, 2, 3)
