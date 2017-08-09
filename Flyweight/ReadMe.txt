享元

运用共享技术有效地支持大量细粒度的对象.



##结构
1. FlyweightFactory(ClothesFactory):创建并管理flyweight对象.
2. Flyweight(Clothes):抽象享元类.
3. ConcreteFlyweight(RunnerClothes):具体享元类.
4. UnsharedConcreteFlyweight(LeadingRunnerClothes):非共享具体享元类.



##优点
1. 享元模式的优点在于它可以极大减少内存中对象的数量，使得相同对象或相似对象在内存中只保存一份.
2. 享元模式的外部状态相对独立，而且不会影响其内部状态，从而使得享元对象可以在不同的环境中被共享.



##缺点
1. 享元模式使得系统更加复杂，需要分离出内部状态和外部状态，这使得程序的逻辑复杂化.
2. 为了使对象可以共享，享元模式需要将享元对象的状态外部化，而读取外部状态使得运行时间变长.
