# ae1f_JsgCoffin
> C++ API for server, specifically for "a thread for a client" method.  
> It is made of educational purpose. Keepest thy expectations for its perfomance.

> Very Basic API for simple threading server.

> It has no implementations. It is your goal to do it.

## Initiation
> Run the shell code to start first. (either on git bash or bash would work.)

## Goal of this
> Make it run both under Windows and Linux.

## Protocol
> The protocol used for data transmission is Sequence, which is a 4-byte integer, Code, which is a 1-byte char, and Message Text, which is a 256-byte char array.  
> The codes used in the protocol are as follows.  
> Code 'N' Data request code Server A transmits one message when it receives a request for Code 'N'.  
> Code 'O' Message transmission code Server A uses Code 'O' when transmitting a message.  
> Code 'Q' Connection termination code Server B terminates all connections when it receives Code 'Q' from Server A.  
> We will use Server A, Server B, and 3 clients like this.  
> Server A will use the following in order when it receives Code 'N':  
> Sequence value 0, Code value O, Message Text "Hello everyone!"  
> Sequence value 1, Code value O, Message Text "Counting begins."  
> Sequence value 2, Code value O, Message Text "Three."  
> Sequence value 3, Code value O, Message Text "Two."   
> Sequence value 4, Code value O, Message Text "One."  
> Sequence value 5, Code value O, Message Text "Zero"  
> Sequence value 5, Code value Q, Message Text "Zero"  
> Sends .  
> When Server B receives 3 clients, it sends Code 'N' to Server A until it receives Code 'Q', and then sends the value received from Server A to the client. However, the value received at this time should be sent to only one client.  
> Connections with 3 clients should be managed using Thread.  

# ae2f::Core
- Rel-v1.2.10.5

> This is a very first & core of my own package.  
> When installed, will be installed as usual, but in directory of "ae2f" under the default install direction.  
> This is a experiment of implementing interface in C.

# Doxygen
> is used for generating documentation of this project.  
> to exclude them from your directory, simply use the [released tags](https://github.com/yuisanae2f/ae2f_Core/releases) so you don't download the auto-generated docs.
