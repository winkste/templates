""" Short description of this Python module.

Longer description of this module.

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
from random import randint
import logging

logging.basicConfig(level=logging.DEBUG,
    format="%(asctime)s - %(filename)s/%(funcName)s(%(lineno)d) - %(levelname)s - %(message)s")
logging.disable(logging.DEBUG)

################################################################################
# Variables

################################################################################
# Functions
def add(first_number, second_number):
    """This function adds two numbers.
    """
    return first_number + second_number

def devide(first_number, second_number):
    """This function devides first number by second number.
    """
    return first_number / second_number

def play_random():
    """This function generates a random number between 0 and ten.
        This number is evaluated against 5 and either big or small
        is returned as string.
    """
    random_number = randint(0, 10)
    if random_number > 5:
        return "big"
    return "small"

def print_me():
    """ This function is printing hello """
    print("Hello")

def is_flat(data):
    """ This function checks if a list is flat """
    return not any(isinstance(i, list) for i in data)

def sum_list(data):
    """ This function sums all elements of a list """
    return sum(data)

def logger_example():
    """Example logging function

    """
    logging.info("This is an info message")
    logging.debug("This is an debug message")
    logging.warning("This is a warning message")
    logging.error("This is a error message")
    logging.critical("This is a critical message")

def object_creator(object_name):
    """Generates an object and prints the name, set new name and prints
        the name again

    """
    obj = TemplateClass()
    print(f"Name of object:{obj.get_object_name()}")
    obj.set_object_name(object_name)
    print(f"This is the new object name: {obj.get_object_name()}")

class TemplateClass:
    """
    A class to represent ...

    ...

    Attributes
    ----------
    object_name : str
        a formatted string of the objects name


    Methods
    -------
    get_object_name()
        Returns the name of the object

    set_object_name(object_name = "DefaultObject")
        Sets the name of the object
    """

    obj_name = "ObjectNameDefault"

    ############################################################################
    # Member Functions

    def __init__(self, name = "DefaultObject"):
        """ This is the object initialization method. """
        self.obj_name = name

    def get_object_name(self):
        """Returns the object name

        Return
        ------
        str : Name of the object
        """
        return self.obj_name

    def set_object_name(self, object_name = "DefaultObject"):
        """Sets the object name

        Parameters
        ----------
        object_name : str, optional
            The new name of the object
        """
        self.obj_name = object_name

    def method(self):
        """ This is the method is calling something """
        self.something(1, 2, 3)

    def something(self, word_a, word_b, word_c):
        """ This method is doing something """


################################################################################
# Scripts
if __name__ == "__main__":
    # execute only if run as a script
    print('--- any module script ---')
    logger_example()
    object_creator("TemplateName")
