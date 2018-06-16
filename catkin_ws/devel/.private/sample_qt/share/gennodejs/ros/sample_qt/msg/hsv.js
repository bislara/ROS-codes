// Auto-generated. Do not edit!

// (in-package sample_qt.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class hsv {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Hmax = null;
      this.Hmin = null;
      this.Smax = null;
      this.Smin = null;
      this.Vmax = null;
      this.Vmin = null;
    }
    else {
      if (initObj.hasOwnProperty('Hmax')) {
        this.Hmax = initObj.Hmax
      }
      else {
        this.Hmax = 0;
      }
      if (initObj.hasOwnProperty('Hmin')) {
        this.Hmin = initObj.Hmin
      }
      else {
        this.Hmin = 0;
      }
      if (initObj.hasOwnProperty('Smax')) {
        this.Smax = initObj.Smax
      }
      else {
        this.Smax = 0;
      }
      if (initObj.hasOwnProperty('Smin')) {
        this.Smin = initObj.Smin
      }
      else {
        this.Smin = 0;
      }
      if (initObj.hasOwnProperty('Vmax')) {
        this.Vmax = initObj.Vmax
      }
      else {
        this.Vmax = 0;
      }
      if (initObj.hasOwnProperty('Vmin')) {
        this.Vmin = initObj.Vmin
      }
      else {
        this.Vmin = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type hsv
    // Serialize message field [Hmax]
    bufferOffset = _serializer.int32(obj.Hmax, buffer, bufferOffset);
    // Serialize message field [Hmin]
    bufferOffset = _serializer.int32(obj.Hmin, buffer, bufferOffset);
    // Serialize message field [Smax]
    bufferOffset = _serializer.int32(obj.Smax, buffer, bufferOffset);
    // Serialize message field [Smin]
    bufferOffset = _serializer.int32(obj.Smin, buffer, bufferOffset);
    // Serialize message field [Vmax]
    bufferOffset = _serializer.int32(obj.Vmax, buffer, bufferOffset);
    // Serialize message field [Vmin]
    bufferOffset = _serializer.int32(obj.Vmin, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type hsv
    let len;
    let data = new hsv(null);
    // Deserialize message field [Hmax]
    data.Hmax = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Hmin]
    data.Hmin = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Smax]
    data.Smax = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Smin]
    data.Smin = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Vmax]
    data.Vmax = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Vmin]
    data.Vmin = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sample_qt/hsv';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '370e08e363886484649819a2c794801e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 Hmax
    int32 Hmin
    int32 Smax
    int32 Smin
    int32 Vmax
    int32 Vmin
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new hsv(null);
    if (msg.Hmax !== undefined) {
      resolved.Hmax = msg.Hmax;
    }
    else {
      resolved.Hmax = 0
    }

    if (msg.Hmin !== undefined) {
      resolved.Hmin = msg.Hmin;
    }
    else {
      resolved.Hmin = 0
    }

    if (msg.Smax !== undefined) {
      resolved.Smax = msg.Smax;
    }
    else {
      resolved.Smax = 0
    }

    if (msg.Smin !== undefined) {
      resolved.Smin = msg.Smin;
    }
    else {
      resolved.Smin = 0
    }

    if (msg.Vmax !== undefined) {
      resolved.Vmax = msg.Vmax;
    }
    else {
      resolved.Vmax = 0
    }

    if (msg.Vmin !== undefined) {
      resolved.Vmin = msg.Vmin;
    }
    else {
      resolved.Vmin = 0
    }

    return resolved;
    }
};

module.exports = hsv;
