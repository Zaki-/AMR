# AMR

Building a Python module

Turning C code into a Python module is also easy. Simply do the following (shown for Irix, see the SWIG Wiki Shared Libraries page for help with other operating systems):
 <p>
 unix % swig -python odom_reset.i 
 
 unix % gcc -c odom_reset.cpp odom_reset_wrap.cpp -I/usr/local/include/python2.7
        
 unix % ld -shared odom_reset.o odom_reset_wrap.o -o _odom_reset.so 
 </p>
 
<p>

 
We can now use the Python module as follows :

 >>> import example
 
 >>> example.fact(5)
 
 120
 
 >>> example.my_mod(7,3)
 
 1
 
 >>> example.get_time()
 
 'Sun Feb 11 23:01:07 1996'
 
 >>>
 
</p>
