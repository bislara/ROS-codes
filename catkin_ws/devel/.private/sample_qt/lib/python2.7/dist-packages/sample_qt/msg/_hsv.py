# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sample_qt/hsv.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class hsv(genpy.Message):
  _md5sum = "370e08e363886484649819a2c794801e"
  _type = "sample_qt/hsv"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 Hmax
int32 Hmin
int32 Smax
int32 Smin
int32 Vmax
int32 Vmin

"""
  __slots__ = ['Hmax','Hmin','Smax','Smin','Vmax','Vmin']
  _slot_types = ['int32','int32','int32','int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       Hmax,Hmin,Smax,Smin,Vmax,Vmin

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(hsv, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.Hmax is None:
        self.Hmax = 0
      if self.Hmin is None:
        self.Hmin = 0
      if self.Smax is None:
        self.Smax = 0
      if self.Smin is None:
        self.Smin = 0
      if self.Vmax is None:
        self.Vmax = 0
      if self.Vmin is None:
        self.Vmin = 0
    else:
      self.Hmax = 0
      self.Hmin = 0
      self.Smax = 0
      self.Smin = 0
      self.Vmax = 0
      self.Vmin = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_6i().pack(_x.Hmax, _x.Hmin, _x.Smax, _x.Smin, _x.Vmax, _x.Vmin))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.Hmax, _x.Hmin, _x.Smax, _x.Smin, _x.Vmax, _x.Vmin,) = _get_struct_6i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6i().pack(_x.Hmax, _x.Hmin, _x.Smax, _x.Smin, _x.Vmax, _x.Vmin))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.Hmax, _x.Hmin, _x.Smax, _x.Smin, _x.Vmax, _x.Vmin,) = _get_struct_6i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6i = None
def _get_struct_6i():
    global _struct_6i
    if _struct_6i is None:
        _struct_6i = struct.Struct("<6i")
    return _struct_6i
