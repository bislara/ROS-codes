;; Auto-generated. Do not edit!


(when (boundp 'sample_qt::hsv)
  (if (not (find-package "SAMPLE_QT"))
    (make-package "SAMPLE_QT"))
  (shadow 'hsv (find-package "SAMPLE_QT")))
(unless (find-package "SAMPLE_QT::HSV")
  (make-package "SAMPLE_QT::HSV"))

(in-package "ROS")
;;//! \htmlinclude hsv.msg.html


(defclass sample_qt::hsv
  :super ros::object
  :slots (_Hmax _Hmin _Smax _Smin _Vmax _Vmin ))

(defmethod sample_qt::hsv
  (:init
   (&key
    ((:Hmax __Hmax) 0)
    ((:Hmin __Hmin) 0)
    ((:Smax __Smax) 0)
    ((:Smin __Smin) 0)
    ((:Vmax __Vmax) 0)
    ((:Vmin __Vmin) 0)
    )
   (send-super :init)
   (setq _Hmax (round __Hmax))
   (setq _Hmin (round __Hmin))
   (setq _Smax (round __Smax))
   (setq _Smin (round __Smin))
   (setq _Vmax (round __Vmax))
   (setq _Vmin (round __Vmin))
   self)
  (:Hmax
   (&optional __Hmax)
   (if __Hmax (setq _Hmax __Hmax)) _Hmax)
  (:Hmin
   (&optional __Hmin)
   (if __Hmin (setq _Hmin __Hmin)) _Hmin)
  (:Smax
   (&optional __Smax)
   (if __Smax (setq _Smax __Smax)) _Smax)
  (:Smin
   (&optional __Smin)
   (if __Smin (setq _Smin __Smin)) _Smin)
  (:Vmax
   (&optional __Vmax)
   (if __Vmax (setq _Vmax __Vmax)) _Vmax)
  (:Vmin
   (&optional __Vmin)
   (if __Vmin (setq _Vmin __Vmin)) _Vmin)
  (:serialization-length
   ()
   (+
    ;; int32 _Hmax
    4
    ;; int32 _Hmin
    4
    ;; int32 _Smax
    4
    ;; int32 _Smin
    4
    ;; int32 _Vmax
    4
    ;; int32 _Vmin
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _Hmax
       (write-long _Hmax s)
     ;; int32 _Hmin
       (write-long _Hmin s)
     ;; int32 _Smax
       (write-long _Smax s)
     ;; int32 _Smin
       (write-long _Smin s)
     ;; int32 _Vmax
       (write-long _Vmax s)
     ;; int32 _Vmin
       (write-long _Vmin s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _Hmax
     (setq _Hmax (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _Hmin
     (setq _Hmin (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _Smax
     (setq _Smax (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _Smin
     (setq _Smin (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _Vmax
     (setq _Vmax (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _Vmin
     (setq _Vmin (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get sample_qt::hsv :md5sum-) "370e08e363886484649819a2c794801e")
(setf (get sample_qt::hsv :datatype-) "sample_qt/hsv")
(setf (get sample_qt::hsv :definition-)
      "int32 Hmax
int32 Hmin
int32 Smax
int32 Smin
int32 Vmax
int32 Vmin


")



(provide :sample_qt/hsv "370e08e363886484649819a2c794801e")


