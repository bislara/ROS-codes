
(cl:in-package :asdf)

(defsystem "sample_qt-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "hsv" :depends-on ("_package_hsv"))
    (:file "_package_hsv" :depends-on ("_package"))
  ))