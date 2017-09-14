安装 rsyslog
sudo apt-get install rsyslog

配置rsyslog
sudo vim /etc/rsyslog.conf

打开文件进行编辑，查找到下面的两行所在的位置，通过删除其行首的#字符来取消注释。

UDP链接

$ModLoad imudp
$UDPServerRun 514
这会使得rsysolog守护进程能够在UDP端口514上接受日志消息了---UDP是一种比TCP速度快，但是并不具有TCP一样的数据流的可靠性。所以如果你需要使用可靠的传送机制，就可以通过取消以下行的注释。

TCP链接

$ModLoad imtcp
$InputTCPServerRun 514 


重新启动rsyslog服务： service rsyslog restart

以上程序运行日志保存在  /var/log/syslog



socker_log为网络写日志

testlog本地写日志