from py_ds_trampoline import Trampoline

class AsyncIOBuilder:
    def load(self):
        return Trampoline("plugin1")

aio = AsyncIOBuilder().load()
aio.do_something() 
aio.get_handle().do_something_inner()
