; Auto-generated. Do not edit!


(cl:in-package sample_qt-msg)


;//! \htmlinclude hsv.msg.html

(cl:defclass <hsv> (roslisp-msg-protocol:ros-message)
  ((Hmax
    :reader Hmax
    :initarg :Hmax
    :type cl:integer
    :initform 0)
   (Hmin
    :reader Hmin
    :initarg :Hmin
    :type cl:integer
    :initform 0)
   (Smax
    :reader Smax
    :initarg :Smax
    :type cl:integer
    :initform 0)
   (Smin
    :reader Smin
    :initarg :Smin
    :type cl:integer
    :initform 0)
   (Vmax
    :reader Vmax
    :initarg :Vmax
    :type cl:integer
    :initform 0)
   (Vmin
    :reader Vmin
    :initarg :Vmin
    :type cl:integer
    :initform 0))
)

(cl:defclass hsv (<hsv>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <hsv>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'hsv)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name sample_qt-msg:<hsv> is deprecated: use sample_qt-msg:hsv instead.")))

(cl:ensure-generic-function 'Hmax-val :lambda-list '(m))
(cl:defmethod Hmax-val ((m <hsv>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sample_qt-msg:Hmax-val is deprecated.  Use sample_qt-msg:Hmax instead.")
  (Hmax m))

(cl:ensure-generic-function 'Hmin-val :lambda-list '(m))
(cl:defmethod Hmin-val ((m <hsv>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sample_qt-msg:Hmin-val is deprecated.  Use sample_qt-msg:Hmin instead.")
  (Hmin m))

(cl:ensure-generic-function 'Smax-val :lambda-list '(m))
(cl:defmethod Smax-val ((m <hsv>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sample_qt-msg:Smax-val is deprecated.  Use sample_qt-msg:Smax instead.")
  (Smax m))

(cl:ensure-generic-function 'Smin-val :lambda-list '(m))
(cl:defmethod Smin-val ((m <hsv>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sample_qt-msg:Smin-val is deprecated.  Use sample_qt-msg:Smin instead.")
  (Smin m))

(cl:ensure-generic-function 'Vmax-val :lambda-list '(m))
(cl:defmethod Vmax-val ((m <hsv>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sample_qt-msg:Vmax-val is deprecated.  Use sample_qt-msg:Vmax instead.")
  (Vmax m))

(cl:ensure-generic-function 'Vmin-val :lambda-list '(m))
(cl:defmethod Vmin-val ((m <hsv>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sample_qt-msg:Vmin-val is deprecated.  Use sample_qt-msg:Vmin instead.")
  (Vmin m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <hsv>) ostream)
  "Serializes a message object of type '<hsv>"
  (cl:let* ((signed (cl:slot-value msg 'Hmax)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Hmin)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Smax)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Smin)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Vmax)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Vmin)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <hsv>) istream)
  "Deserializes a message object of type '<hsv>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Hmax) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Hmin) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Smax) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Smin) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Vmax) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Vmin) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<hsv>)))
  "Returns string type for a message object of type '<hsv>"
  "sample_qt/hsv")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'hsv)))
  "Returns string type for a message object of type 'hsv"
  "sample_qt/hsv")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<hsv>)))
  "Returns md5sum for a message object of type '<hsv>"
  "370e08e363886484649819a2c794801e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'hsv)))
  "Returns md5sum for a message object of type 'hsv"
  "370e08e363886484649819a2c794801e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<hsv>)))
  "Returns full string definition for message of type '<hsv>"
  (cl:format cl:nil "int32 Hmax~%int32 Hmin~%int32 Smax~%int32 Smin~%int32 Vmax~%int32 Vmin~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'hsv)))
  "Returns full string definition for message of type 'hsv"
  (cl:format cl:nil "int32 Hmax~%int32 Hmin~%int32 Smax~%int32 Smin~%int32 Vmax~%int32 Vmin~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <hsv>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <hsv>))
  "Converts a ROS message object to a list"
  (cl:list 'hsv
    (cl:cons ':Hmax (Hmax msg))
    (cl:cons ':Hmin (Hmin msg))
    (cl:cons ':Smax (Smax msg))
    (cl:cons ':Smin (Smin msg))
    (cl:cons ':Vmax (Vmax msg))
    (cl:cons ':Vmin (Vmin msg))
))
