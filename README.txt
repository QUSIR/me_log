��װ rsyslog
sudo apt-get install rsyslog

����rsyslog
sudo vim /etc/rsyslog.conf

���ļ����б༭�����ҵ�������������ڵ�λ�ã�ͨ��ɾ�������׵�#�ַ���ȡ��ע�͡�

UDP����

$ModLoad imudp
$UDPServerRun 514
���ʹ��rsysolog�ػ������ܹ���UDP�˿�514�Ͻ�����־��Ϣ��---UDP��һ�ֱ�TCP�ٶȿ죬���ǲ�������TCPһ�����������Ŀɿ��ԡ������������Ҫʹ�ÿɿ��Ĵ��ͻ��ƣ��Ϳ���ͨ��ȡ�������е�ע�͡�

TCP����

$ModLoad imtcp
$InputTCPServerRun 514 


��������rsyslog���� service rsyslog restart

���ϳ���������־������  /var/log/syslog



socker_logΪ����д��־

testlog����д��־