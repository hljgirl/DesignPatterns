﻿##职责链

使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止.



##结构
1. Handler(Handler):定义处理请求的接口类.
2. ConcreteHandler(CaptainHandler,ChiefHandler,ColoneHandler):可以处理请求,并将请求递交给后续的对象.



##优点
1. 可以让多个对象以链条的方式处理请求.
2. 避免请求的发送者和接收者之间的耦合关系.
3. 可以随时增加或修改一个请求的结构,增强灵活性.



#缺点
1. 请求有可能到链尾都没人处理的情况.
