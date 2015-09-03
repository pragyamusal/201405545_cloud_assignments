#! usr/bin/python

from mininet.net import Mininet
from mininet.node import Controller
from mininet.cli import CLI
from mininet.log import setLogLevel,info
from mininet.link import TCLink
import sys

def Topology():
        args = (sys.argv)
        hosts = int(args[1])
        switches = int(args[2])
        net = Mininet(controller=Controller)
        info('Adding Controller\n')
        net.addController('c1')
        info('Adding Switches\n')
        switch_list=[]
        for j in range(switches):
                switch_list.append(net.addSwitch('S'+str(j+1)))
        info('Adding Hosts\n')
        host_list=[]
        for k in range(hosts):
                host_list.append(net.addHost('H'+str(k+1)))
        info('Establishing network\n')
        for l in range(switches):
                if l%2 != 0:
                        m1=net.addLink(switch_list[l],host_list[2*l+1],cls = TCLink)
                        m2=net.addLink(switch_list[l],host_list[2*l-1],cls = TCLink)
                        m1.intf1.config(bw = 1)
                        m2.intf1.config(bw = 2)
                else:
                        n1=net.addLink(switch_list[l],host_list[2*l],cls = TCLink)
                        n2=net.addLink(switch_list[l],host_list[2*l+2],cls = TCLink)
                        n1.intf1.config(bw = 1)
			n2.intf1.config(bw = 2)
        for n in range(switches):
                if n+2 < switches:
                        w1=net.addLink(switch_list[n],switch_list[n+2],cls=TCLink)
        info('starting network\n')
        net.start()
        info('Running CLI\n')
        CLI(net)
        info('Stopping network')
        net.stop()

if __name__ == '__main__':
        setLogLevel('info')
        Topology()

