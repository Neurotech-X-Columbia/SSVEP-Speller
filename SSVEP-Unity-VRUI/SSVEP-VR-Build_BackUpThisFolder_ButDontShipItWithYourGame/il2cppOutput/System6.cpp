#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Mono.Security.Interface.CipherSuiteCode[]
struct CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Mono.Net.Security.AsyncProtocolRequest
struct AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39;
// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9;
// System.ComponentModel.BrowsableAttribute
struct BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76;
// Mono.Net.Security.BufferOffsetSize2
struct BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB;
// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E;
// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083;
// System.ComponentModel.ComponentConverter
struct ComponentConverter_tFE75D55373FA41F9E4EC733FEDC24C8166A3D7CE;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DBNull
struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF;
// System.ComponentModel.DefaultEventAttribute
struct DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07;
// System.ComponentModel.DefaultPropertyAttribute
struct DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86;
// System.ComponentModel.DesignTimeVisibleAttribute
struct DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE;
// System.ComponentModel.DesignerCategoryAttribute
struct DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715;
// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8;
// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE;
// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Mono.Security.Interface.ICertificateValidator
struct ICertificateValidator_t8ECF48A37EC708C8A16305F9B6B44C50676AA854;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t4D2DC61F0664F305059641FF6BDA07DF2141236C;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t20C0BA2FB19CAD6D3BD432B033BC560186E574C1;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB;
// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED;
// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23;
// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.Net.Security.LocalCertSelectionCallback
struct LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E;
// Mono.Net.Security.MobileTlsContext
struct MobileTlsContext_t456DDC89866EE34EF32EEF959AD92C9F17684476;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// System.Net.Security.ServerCertSelectionCallback
struct ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B;
// System.Net.Security.SslClientAuthenticationOptions
struct SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9;
// System.Net.Security.SslServerAuthenticationOptions
struct SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4;
// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6;
// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0;
// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.Net.Sockets.SocketAsyncResult/<>c
struct U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45;
// System.Net.Security.SslStream/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IContainer_t717EF6801E89E9463045041A0C482723AC06DA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133;
IL2CPP_EXTERN_C String_t* _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F;
IL2CPP_EXTERN_C String_t* _stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103;
IL2CPP_EXTERN_C String_t* _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
IL2CPP_EXTERN_C String_t* _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745;
IL2CPP_EXTERN_C String_t* _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
IL2CPP_EXTERN_C String_t* _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763;
IL2CPP_EXTERN_C String_t* _stringLiteral138938A63672EEB2629F899313126D92DFB6DE16;
IL2CPP_EXTERN_C String_t* _stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B;
IL2CPP_EXTERN_C String_t* _stringLiteral1842163E600730C192914B1BCFB77A9A809A8070;
IL2CPP_EXTERN_C String_t* _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
IL2CPP_EXTERN_C String_t* _stringLiteral1F40F39B9F659411903AC93DF93E8658291E5522;
IL2CPP_EXTERN_C String_t* _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral215B9008FEB54933AF219588889451A0CB610D34;
IL2CPP_EXTERN_C String_t* _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
IL2CPP_EXTERN_C String_t* _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7;
IL2CPP_EXTERN_C String_t* _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
IL2CPP_EXTERN_C String_t* _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2F85BE44F7DC01CA0EC942D07BDDFEA8EF186252;
IL2CPP_EXTERN_C String_t* _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
IL2CPP_EXTERN_C String_t* _stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229;
IL2CPP_EXTERN_C String_t* _stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0;
IL2CPP_EXTERN_C String_t* _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
IL2CPP_EXTERN_C String_t* _stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836;
IL2CPP_EXTERN_C String_t* _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
IL2CPP_EXTERN_C String_t* _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral3F42B9F0F106EADBC5A6D35B0C706AB9041D29C8;
IL2CPP_EXTERN_C String_t* _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral443F4C4E0724E859C348938724B926BE877FC5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
IL2CPP_EXTERN_C String_t* _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
IL2CPP_EXTERN_C String_t* _stringLiteral53549F14C4C0C01E846937308C01413567514ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
IL2CPP_EXTERN_C String_t* _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD369CF985844B111CA4447943A285D359441C;
IL2CPP_EXTERN_C String_t* _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5CAB08554552B91BA981CD02709F3608049743F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC2FEA880A089FA5B6DB02498B4783DC9BDA299;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58;
IL2CPP_EXTERN_C String_t* _stringLiteral60081E4C6B9BD5BBFC2D172205F8D7236FF4A669;
IL2CPP_EXTERN_C String_t* _stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434;
IL2CPP_EXTERN_C String_t* _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
IL2CPP_EXTERN_C String_t* _stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
IL2CPP_EXTERN_C String_t* _stringLiteral6F581DC31922CB8BA16D8D1268547106C0D2A599;
IL2CPP_EXTERN_C String_t* _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE6AA6EF03FB6550152903A7B201A6108F728DB;
IL2CPP_EXTERN_C String_t* _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
IL2CPP_EXTERN_C String_t* _stringLiteral71C0C5D6DEFFF553F1A16F55E32CB5DD206B4779;
IL2CPP_EXTERN_C String_t* _stringLiteral73E7438EC9EFF139A2E1CEA81F03B87F9EF5CF0A;
IL2CPP_EXTERN_C String_t* _stringLiteral7432BC139FBCA09AC74A0F2BAE3FBB728A59E72D;
IL2CPP_EXTERN_C String_t* _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral7E726DA69119456565965AD4A7E41D2FD45369DC;
IL2CPP_EXTERN_C String_t* _stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705;
IL2CPP_EXTERN_C String_t* _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
IL2CPP_EXTERN_C String_t* _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
IL2CPP_EXTERN_C String_t* _stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D;
IL2CPP_EXTERN_C String_t* _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
IL2CPP_EXTERN_C String_t* _stringLiteral8CDA7C69956AC5A33C80AA1964D740023C8C99F9;
IL2CPP_EXTERN_C String_t* _stringLiteral8F87426D22AEE44544168F0CDC2ECCEE865ABCA6;
IL2CPP_EXTERN_C String_t* _stringLiteral94EC39D9CD015C12CA91AF28F761F4059A1C6437;
IL2CPP_EXTERN_C String_t* _stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551;
IL2CPP_EXTERN_C String_t* _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
IL2CPP_EXTERN_C String_t* _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B;
IL2CPP_EXTERN_C String_t* _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F7BBA3AABC787815F5A83054BA163D213D1763;
IL2CPP_EXTERN_C String_t* _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E3C16C9C1A5D04CF77B335EB6F14AD0DCC7645;
IL2CPP_EXTERN_C String_t* _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
IL2CPP_EXTERN_C String_t* _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9340620E0F239BC39D9B1AA9CCF6119A0BB3FF;
IL2CPP_EXTERN_C String_t* _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57;
IL2CPP_EXTERN_C String_t* _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
IL2CPP_EXTERN_C String_t* _stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
IL2CPP_EXTERN_C String_t* _stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
IL2CPP_EXTERN_C String_t* _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
IL2CPP_EXTERN_C String_t* _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
IL2CPP_EXTERN_C String_t* _stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
IL2CPP_EXTERN_C String_t* _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69;
IL2CPP_EXTERN_C String_t* _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
IL2CPP_EXTERN_C String_t* _stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseClear_m52E1AA187776AA0B8ABE5726C23E8FDC893C9ACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueCollection_Add_mCBA5E260853B493CE3814EE115B6EE144AD51EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueCollection_Clear_mF42C05323907DA58B571EADD6A0ACB556E7A43B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslClientAuthenticationOptions_set_CertificateRevocationCheckMode_m5DB15346690DAC5A8F610AA8C7DEC7F2DFC29DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslClientAuthenticationOptions_set_EncryptionPolicy_m008E6F28D3C4BFEFFB32A9BEA6AEF1C2B53F1C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslServerAuthenticationOptions_set_CertificateRevocationCheckMode_mCB4596F4D3F547C63E3029612C713F90EF28854C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslServerAuthenticationOptions_set_EncryptionPolicy_m88D26CB33718B5E589647926F4264CFF5AC0E909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_com;;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_pinvoke;;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke;
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveHashCodeProvider::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E  : public RuntimeObject
{
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;
};

struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields
{
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.DBNull
struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC  : public RuntimeObject
{
};

struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields
{
	// System.DBNull System.DBNull::Value
	DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___Value_0;
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8  : public RuntimeObject
{
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::_head
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* ____head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::_parent
	Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* ____parent_1;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.HashtableExtensions
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};

// System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374  : public RuntimeObject
{
	// System.AsyncCallback System.IOAsyncResult::async_callback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___async_callback_0;
	// System.Object System.IOAsyncResult::async_state
	RuntimeObject* ___async_state_1;
	// System.Threading.ManualResetEvent System.IOAsyncResult::wait_handle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wait_handle_2;
	// System.Boolean System.IOAsyncResult::completed_synchronously
	bool ___completed_synchronously_3;
	// System.Boolean System.IOAsyncResult::completed
	bool ___completed_4;
};
// Native definition for P/Invoke marshalling of System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_pinvoke
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
// Native definition for COM marshalling of System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_com
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E  : public RuntimeObject
{
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_16;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_17;
};

// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_currentCount
	int32_t ___m_currentCount_0;
	// System.Int32 System.Threading.SemaphoreSlim::m_maxCount
	int32_t ___m_maxCount_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitCount
	int32_t ___m_waitCount_2;
	// System.Object System.Threading.SemaphoreSlim::m_lockObj
	RuntimeObject* ___m_lockObj_3;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitHandle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_waitHandle_4;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncHead
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___m_asyncHead_5;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncTail
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___m_asyncTail_6;
};

struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::s_trueTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_trueTask_7;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::s_falseTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_falseTask_8;
	// System.Action`1<System.Object> System.Threading.SemaphoreSlim::s_cancellationTokenCanceledEventHandler
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_cancellationTokenCanceledEventHandler_10;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.Net.Security.SslClientAuthenticationOptions
struct SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9  : public RuntimeObject
{
	// System.Net.Security.EncryptionPolicy System.Net.Security.SslClientAuthenticationOptions::_encryptionPolicy
	int32_t ____encryptionPolicy_0;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Net.Security.SslClientAuthenticationOptions::_checkCertificateRevocation
	int32_t ____checkCertificateRevocation_1;
	// System.Security.Authentication.SslProtocols System.Net.Security.SslClientAuthenticationOptions::_enabledSslProtocols
	int32_t ____enabledSslProtocols_2;
	// System.Boolean System.Net.Security.SslClientAuthenticationOptions::_allowRenegotiation
	bool ____allowRenegotiation_3;
	// System.String System.Net.Security.SslClientAuthenticationOptions::<TargetHost>k__BackingField
	String_t* ___U3CTargetHostU3Ek__BackingField_4;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Security.SslClientAuthenticationOptions::<ClientCertificates>k__BackingField
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___U3CClientCertificatesU3Ek__BackingField_5;
};

// System.Net.Security.SslServerAuthenticationOptions
struct SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Net.Security.SslServerAuthenticationOptions::_checkCertificateRevocation
	int32_t ____checkCertificateRevocation_0;
	// System.Security.Authentication.SslProtocols System.Net.Security.SslServerAuthenticationOptions::_enabledSslProtocols
	int32_t ____enabledSslProtocols_1;
	// System.Net.Security.EncryptionPolicy System.Net.Security.SslServerAuthenticationOptions::_encryptionPolicy
	int32_t ____encryptionPolicy_2;
	// System.Boolean System.Net.Security.SslServerAuthenticationOptions::_allowRenegotiation
	bool ____allowRenegotiation_3;
	// System.Boolean System.Net.Security.SslServerAuthenticationOptions::<ClientCertificateRequired>k__BackingField
	bool ___U3CClientCertificateRequiredU3Ek__BackingField_4;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslServerAuthenticationOptions::<ServerCertificate>k__BackingField
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___U3CServerCertificateU3Ek__BackingField_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Collections.Specialized.StringCollection
struct StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___data_0;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD  : public RuntimeObject
{
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList/ListEntry::_next
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* ____next_0;
	// System.Object System.ComponentModel.EventHandlerList/ListEntry::_key
	RuntimeObject* ____key_1;
	// System.Delegate System.ComponentModel.EventHandlerList/ListEntry::_handler
	Delegate_t* ____handler_2;
};

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81  : public RuntimeObject
{
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ____coll_0;
};

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2  : public RuntimeObject
{
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject* ___Value_1;
};

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0  : public RuntimeObject
{
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;
};

// System.Net.Sockets.SocketAsyncResult/<>c
struct U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45  : public RuntimeObject
{
};

struct U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields
{
	// System.Net.Sockets.SocketAsyncResult/<>c System.Net.Sockets.SocketAsyncResult/<>c::<>9
	U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* ___U3CU3E9_0;
	// System.Threading.WaitCallback System.Net.Sockets.SocketAsyncResult/<>c::<>9__27_0
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___U3CU3E9__27_0_1;
};

// System.Net.Security.SslStream/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C  : public RuntimeObject
{
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream/<>c__DisplayClass21_0::callback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___callback_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<>c__DisplayClass21_0::<>4__this
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___U3CU3E4__this_1;
};

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3  : public RuntimeObject
{
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>
struct Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mono.Security.Interface.TlsProtocols>
struct Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9_StaticFields
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::s_values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___s_values_2;
};

// System.ComponentModel.BrowsableAttribute
struct BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.BrowsableAttribute::<Browsable>k__BackingField
	bool ___U3CBrowsableU3Ek__BackingField_3;
};

struct BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields
{
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* ___Yes_0;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* ___No_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* ___Default_2;
};

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.CategoryAttribute::localized
	bool ___localized_0;
	// System.String System.ComponentModel.CategoryAttribute::categoryValue
	String_t* ___categoryValue_1;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_5;
	// System.Globalization.CompareOptions System.CultureAwareComparer::_options
	int32_t ____options_6;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.ComponentModel.DefaultEventAttribute
struct DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DefaultEventAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

struct DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_StaticFields
{
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* ___Default_1;
};

// System.ComponentModel.DefaultPropertyAttribute
struct DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DefaultPropertyAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

struct DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_StaticFields
{
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* ___Default_1;
};

// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Object System.ComponentModel.DefaultValueAttribute::_value
	RuntimeObject* ____value_0;
};

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.ComponentModel.DesignTimeVisibleAttribute
struct DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_0;
};

struct DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields
{
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* ___Yes_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* ___Default_3;
};

// System.ComponentModel.DesignerCategoryAttribute
struct DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DesignerCategoryAttribute::<Category>k__BackingField
	String_t* ___U3CCategoryU3Ek__BackingField_4;
};

struct DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields
{
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Component_0;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Default_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Generic_3;
};

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::<Visibility>k__BackingField
	int32_t ___U3CVisibilityU3Ek__BackingField_4;
};

struct DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields
{
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Content_0;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Hidden_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Visible_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Default_3;
};

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DisplayNameAttribute::<DisplayNameValue>k__BackingField
	String_t* ___U3CDisplayNameValueU3Ek__BackingField_1;
};

struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields
{
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* ___Default_0;
};

// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;
};

// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t* ___type_3;
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017  : public MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E
{
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_19;
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.Type System.ComponentModel.ReferenceConverter::_type
	Type_t* ____type_3;
};

struct ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_StaticFields
{
	// System.String System.ComponentModel.ReferenceConverter::s_none
	String_t* ___s_none_2;
};

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<Reloadable>k__BackingField
	bool ___U3CReloadableU3Ek__BackingField_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<SerializerTypeName>k__BackingField
	String_t* ___U3CSerializerTypeNameU3Ek__BackingField_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<SerializerBaseTypeName>k__BackingField
	String_t* ___U3CSerializerBaseTypeNameU3Ek__BackingField_2;
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.TypeConverterAttribute::<ConverterTypeName>k__BackingField
	String_t* ___U3CConverterTypeNameU3Ek__BackingField_1;
};

struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields
{
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* ___Default_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F__padding[44];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7__padding[9];
	};
};
#pragma pack(pop, tp)

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A
	__StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 ___00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374_2;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
	__StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 ___27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_5;
	// System.Int64 <PrivateImplementationDetails>::3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C
	int64_t ___3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF
	__StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD ___356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8
	__StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F ___9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_10;
};

// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C  : public CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0
{
};

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____InnerStream_5;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_6;
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.ComponentModel.ComponentConverter
struct ComponentConverter_tFE75D55373FA41F9E4EC733FEDC24C8166A3D7CE  : public ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_5;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_6;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_7;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_8;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* ___native_9;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340  : public IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374
{
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	// System.Net.Sockets.SocketOperation System.Net.Sockets.SocketAsyncResult::operation
	int32_t ___operation_6;
	// System.Exception System.Net.Sockets.SocketAsyncResult::DelayedException
	Exception_t* ___DelayedException_7;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncResult::EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_8;
	// System.Memory`1<System.Byte> System.Net.Sockets.SocketAsyncResult::Buffer
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___Buffer_9;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Offset
	int32_t ___Offset_10;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Size
	int32_t ___Size_11;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncResult::SockFlags
	int32_t ___SockFlags_12;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptSocket_13;
	// System.Net.IPAddress[] System.Net.Sockets.SocketAsyncResult::Addresses
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___Addresses_14;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Port
	int32_t ___Port_15;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_16;
	// System.Boolean System.Net.Sockets.SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_17;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::CurrentAddress
	int32_t ___CurrentAddress_18;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptedSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptedSocket_19;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Total
	int32_t ___Total_20;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::error
	int32_t ___error_21;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::EndCalled
	int32_t ___EndCalled_22;
};
// Native definition for P/Invoke marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke : public IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_pinvoke
{
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_pinvoke* ___DelayedException_7;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_8;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptSocket_13;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
// Native definition for COM marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com : public IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_com
{
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_com* ___DelayedException_7;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_8;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptSocket_13;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760  : public RuntimeObject
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject* ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject* ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject* ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject* ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	// System.Int64 System.Runtime.Remoting.Messaging.AsyncResult::add_time
	int64_t ___add_time_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601* ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;
	// System.Threading.WaitCallback System.Runtime.Remoting.Messaging.AsyncResult::orig_cb
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___orig_cb_15;
};
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_pinvoke
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_com
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com* ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};

// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD  : public RuntimeObject
{
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_1;
	// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::z_stream
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___io_buffer_5;
	// System.Exception System.IO.Compression.DeflateStreamNative::last_error
	Exception_t* ___last_error_6;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::xobileTlsContext
	MobileTlsContext_t456DDC89866EE34EF32EEF959AD92C9F17684476* ___xobileTlsContext_7;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::lastException
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___lastException_8;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncHandshakeRequest
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncHandshakeRequest_9;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncReadRequest
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncReadRequest_10;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncWriteRequest
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncWriteRequest_11;
	// Mono.Net.Security.BufferOffsetSize2 Mono.Net.Security.MobileAuthenticatedStream::readBuffer
	BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629* ___readBuffer_12;
	// Mono.Net.Security.BufferOffsetSize2 Mono.Net.Security.MobileAuthenticatedStream::writeBuffer
	BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629* ___writeBuffer_13;
	// System.Object Mono.Net.Security.MobileAuthenticatedStream::ioLock
	RuntimeObject* ___ioLock_14;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::closeRequested
	int32_t ___closeRequested_15;
	// System.Boolean Mono.Net.Security.MobileAuthenticatedStream::shutdown
	bool ___shutdown_16;
	// Mono.Net.Security.MobileAuthenticatedStream/Operation Mono.Net.Security.MobileAuthenticatedStream::operation
	int32_t ___operation_17;
	// System.Net.Security.SslStream Mono.Net.Security.MobileAuthenticatedStream::<SslStream>k__BackingField
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___U3CSslStreamU3Ek__BackingField_19;
	// Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::<Settings>k__BackingField
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___U3CSettingsU3Ek__BackingField_20;
	// Mono.Net.Security.MobileTlsProvider Mono.Net.Security.MobileAuthenticatedStream::<Provider>k__BackingField
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___U3CProviderU3Ek__BackingField_21;
	// System.String Mono.Net.Security.MobileAuthenticatedStream::<TargetHost>k__BackingField
	String_t* ___U3CTargetHostU3Ek__BackingField_22;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::ID
	int32_t ___ID_24;
};

struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E_StaticFields
{
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::uniqueNameInteger
	int32_t ___uniqueNameInteger_18;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::nextId
	int32_t ___nextId_23;
};

// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0  : public RuntimeObject
{
	// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::<RemoteCertificateValidationCallback>k__BackingField
	MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
	// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::<ClientCertificateSelectionCallback>k__BackingField
	MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::<CertificateValidationTime>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CCertificateValidationTimeU3Ek__BackingField_2;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::<TrustAnchors>k__BackingField
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___U3CTrustAnchorsU3Ek__BackingField_3;
	// System.Object Mono.Security.Interface.MonoTlsSettings::<UserSettings>k__BackingField
	RuntimeObject* ___U3CUserSettingsU3Ek__BackingField_4;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<CertificateSearchPaths>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CCertificateSearchPathsU3Ek__BackingField_5;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<SendCloseNotify>k__BackingField
	bool ___U3CSendCloseNotifyU3Ek__BackingField_6;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<ClientCertificateIssuers>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CClientCertificateIssuersU3Ek__BackingField_7;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<DisallowUnauthenticatedCertificateRequest>k__BackingField
	bool ___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField_8;
	// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::<EnabledProtocols>k__BackingField
	Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 ___U3CEnabledProtocolsU3Ek__BackingField_9;
	// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::<EnabledCiphers>k__BackingField
	CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* ___U3CEnabledCiphersU3Ek__BackingField_10;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::cloned
	bool ___cloned_11;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertName
	bool ___checkCertName_12;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_13;
	// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::useServicePointManagerCallback
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___useServicePointManagerCallback_14;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::skipSystemValidators
	bool ___skipSystemValidators_15;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::callbackNeedsChain
	bool ___callbackNeedsChain_16;
	// Mono.Security.Interface.ICertificateValidator Mono.Security.Interface.MonoTlsSettings::certificateValidator
	RuntimeObject* ___certificateValidator_17;
};

struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_StaticFields
{
	// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::defaultSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___defaultSettings_18;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileTlsProvider System.Net.Security.SslStream::provider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___provider_7;
	// Mono.Security.Interface.MonoTlsSettings System.Net.Security.SslStream::settings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___settings_8;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___validationCallback_9;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selectionCallback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___selectionCallback_10;
	// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::impl
	MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* ___impl_11;
	// System.Boolean System.Net.Security.SslStream::explicitSettings
	bool ___explicitSettings_12;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.LocalCertSelectionCallback
struct LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2  : public MulticastDelegate_t
{
};

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859  : public MulticastDelegate_t
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3  : public MulticastDelegate_t
{
};

// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0  : public MulticastDelegate_t
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.Net.Security.ServerCertSelectionCallback
struct ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654  : public MulticastDelegate_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(const Exception_t& unmarshaled, Exception_t_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(const Exception_t_marshaled_pinvoke& marshaled, Exception_t& unmarshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(Exception_t_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com(const Exception_t& unmarshaled, Exception_t_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com_back(const Exception_t_marshaled_com& marshaled, Exception_t& unmarshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com_cleanup(Exception_t_marshaled_com& marshaled);

// System.Memory`1<T> System.Memory`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;

// System.IntPtr System.Net.Sockets.Socket::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Socket_get_Handle_mBF42AC5E9403C23BE532F17EE337BF9F150A0256 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAsyncResult__ctor_mAA7211B9E6FDF23D0012354FEE350B6B5EB786F4 (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::Init(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAsyncResult_Init_m6580DFCCB89EF7CFF91F7040C62ECC3811A3A98D (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___async_callback0, RuntimeObject* ___async_state1, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::op_Implicit(T[])
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_gshared)(___array0, method);
}
// System.Void System.IOAsyncResult::.ctor(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAsyncResult__ctor_mCDC93C97872E9DAB6A1D9F27C1FA14DDFC6A400D (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___async_callback0, RuntimeObject* ___async_state1, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_CleanedUp_m8F6EDAE37C56CBC282D3EAF9D93B5726EEC85988 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAsyncResult_set_IsCompleted_m72D907352B8AC32DF47864E4F4EDFADEC825A6F9 (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m05CF00E355CE07D625386779E3F3D3D2341FEE86 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Int32 System.Threading.SemaphoreSlim::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SemaphoreSlim_Release_m4F3CB668D91DEE067A67266C266FEE5AADF56148 (SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* __this, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26 (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::CheckDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) ;
// System.String Mono.Net.Security.MobileAuthenticatedStream::get_TargetHost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MobileAuthenticatedStream_get_TargetHost_m572DA701CB3CE3FA4006D5745F9A3B9A52739CAB_inline (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoTlsProvider Mono.Security.Interface.MonoTlsProviderFactory::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* MonoTlsProviderFactory_GetProvider_m8684E3A1AFB043FA00DEC4BCF95F8B288C136936 (const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_mB4497903594E8A33C14B9A4C4DAB7B16BA2E9B2C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback2, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback3, const RuntimeMethod* method) ;
// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, const RuntimeMethod* method) ;
// Mono.Net.Security.MobileTlsProvider System.Net.Security.SslStream::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* SslStream_GetProvider_mE1D070C13DB759156659F57AB9DF4D2E397FD85B (const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::CopyDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_CopyDefaultSettings_m4B0A3E8B7D106FA7F0D243FB2A0A4B115CD21942 (const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::SetAndVerifyValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::SetAndVerifySelectionCallback(System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___callback0, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::PublicToMono(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* CallbackHelpers_PublicToMono_m6404DAFAD159E4D91FB5822B4855B6A8F05777EE (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___callback0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_RemoteCertificateValidationCallback(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Delegate::op_Inequality(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0 (Delegate_t* ___d10, Delegate_t* ___d21, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::get_RemoteCertificateValidationCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mBE4019B5D6D20FC100DAF52B1172ACF497046370 (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_ClientCertificateSelectionCallback(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___value0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoLocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoLocalCertificateSelectionCallback__ctor_mCA81824D698BD5808E501A9AC4DA99758B69D3FC (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::get_ClientCertificateSelectionCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) ;
// System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAuthenticatedStream_AuthenticateAsClient_mEB1237B52A4AB1FF3D7D3E52F61CE78A744973FC (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___clientCertificates1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const RuntimeMethod* method) ;
// System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAuthenticatedStream_AuthenticateAsServer_m38A5035F798D754F9C460A3C4E2B90B673DD9091 (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___serverCertificate0, bool ___clientCertificateRequired1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Stream_ReadAsync_m734E5C146A1217C9E8FEC56ABDBD2AC33F5F8F87 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED (RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared)(___asyncResult0, method);
}
// System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_inline (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, bool ___browsable0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___description0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583 (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, String_t* ___category0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) ;
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>::.ctor(T)
inline void Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_inline (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>::get_HasValue()
inline bool Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_inline (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1 (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, int32_t ___visibility0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___displayName0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::set_DisplayNameValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_mB48FBD0C68C97EF69D80B56EB927CAF08E3181E1 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m250FFAE6A6F747F6E6D4BB6EA43A757E347CD51D (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_mB4FA5CCA0CDB08730E9ED40FA935BA38C032D83A (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DefaultEventAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946 (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, bool ___visible0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.CategoryAttribute::get_Category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.MarshalByRefObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538 (MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceConverter__ctor_mECD358A5C07B37EFD8659FDEF4C067A16E51171E (ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379 (const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_m4DF2B191F4BBBF3B7AC82CE276E3E62F0A9159CC (int32_t ___error0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m289660079DD06ADACDAABE3BC8948AF7C73A8602 (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m3B89FDD35A0B6E96CE69B2FAD48FB832402167AC (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_get_Comparer_mEEA4E6897C994C33B4591B953CE6D4FF2F8B95BE_inline (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Add_mCBA5E260853B493CE3814EE115B6EE144AD51EBE (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___c0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_mD5B44E4DD8805C7B53A0BEF4985C398893383271 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseClear_m52E1AA187776AA0B8ABE5726C23E8FDC893C9ACE (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_GetAsOneString_m9572A021DF304441085F4661526BB1289957A193 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) ;
// System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetAsStringArray_mEE10A76D84E259EB34CFDB1BA1D41C6E14A26884 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameObjectCollectionBase_BaseGetAllKeys_m00ADAB2845483DCD590077264B6C11553BBAD744 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___dummy0, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultHashCodeProvider_m0DEC6F17BB96B8492250DCC38617890C4417E284 (const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultComparer_m1764CA10BF8362FE4B86743BC5450ACF9F33AC77 (const RuntimeMethod* method) ;
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) ;
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___comparer0, RuntimeObject* ___hashCodeProvider1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513 (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___coll0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696 (String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection__ctor_m1C4BBB21102A9153DD07811B62900528EFB2E286 (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___coll0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveComparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveComparer__ctor_mCB4043516ED08874EE7AA38C56A3C3E016F4DA1E (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveHashCodeProvider__ctor_mE5326CFE4A3269CC813CCF1ADF2E57529E902C4B (CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___stream0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C void* CDECL CreateZStream(int32_t, int32_t, Il2CppMethodPointer, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL CloseZStream(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Flush(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ReadZStream(void*, intptr_t, int32_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WriteZStream(void*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke& marshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke& marshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup(SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_com(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com& marshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_com_back(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com& marshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_com_cleanup(SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com& marshaled)
{
}
// System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SocketAsyncResult_get_Handle_mBEAD04497226B5110889462C480B2BBF93AAD430 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_1;
	}

IL_000e:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = __this->___socket_5;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = Socket_get_Handle_mBF42AC5E9403C23BE532F17EE337BF9F150A0256(L_2, NULL);
		return L_3;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult__ctor_m2123FFF2C2A56DB840E109348FEEA575B5B691E4 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	{
		IOAsyncResult__ctor_mAA7211B9E6FDF23D0012354FEE350B6B5EB786F4(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Init(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Init_m4FFCC4198F1133FC01DB80D562B59FB35086EC45 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, int32_t ___operation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_0 = ___callback1;
		RuntimeObject* L_1 = ___state2;
		IOAsyncResult_Init_m6580DFCCB89EF7CFF91F7040C62ECC3811A3A98D(__this, L_0, L_1, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = ___socket0;
		__this->___socket_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_5), (void*)L_2);
		int32_t L_3 = ___operation3;
		__this->___operation_6 = L_3;
		__this->___DelayedException_7 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)(Exception_t*)NULL);
		__this->___EndPoint_8 = (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EndPoint_8), (void*)(EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4;
		L_4 = Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_RuntimeMethod_var);
		__this->___Buffer_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Buffer_9))->____object_0), (void*)NULL);
		__this->___Offset_10 = 0;
		__this->___Size_11 = 0;
		__this->___SockFlags_12 = 0;
		__this->___AcceptSocket_13 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AcceptSocket_13), (void*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL);
		__this->___Addresses_14 = (IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Addresses_14), (void*)(IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D*)NULL);
		__this->___Port_15 = 0;
		__this->___Buffers_16 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffers_16), (void*)(RuntimeObject*)NULL);
		__this->___ReuseSocket_17 = (bool)0;
		__this->___CurrentAddress_18 = 0;
		__this->___AcceptedSocket_19 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AcceptedSocket_19), (void*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL);
		__this->___Total_20 = 0;
		__this->___error_21 = 0;
		__this->___EndCalled_22 = 0;
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult__ctor_m3C1FE5E660B13BB4C17D1756B918D9EEC6052F79 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, int32_t ___operation3, const RuntimeMethod* method) 
{
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_0 = ___callback1;
		RuntimeObject* L_1 = ___state2;
		IOAsyncResult__ctor_mCDC93C97872E9DAB6A1D9F27C1FA14DDFC6A400D(__this, L_0, L_1, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = ___socket0;
		__this->___socket_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_5), (void*)L_2);
		int32_t L_3 = ___operation3;
		__this->___operation_6 = L_3;
		return;
	}
}
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketAsyncResult_get_ErrorCode_m2CFEB18E19F49775804758830C58B1B068CF936C (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_0 = NULL;
	{
		Exception_t* L_0 = __this->___DelayedException_7;
		V_0 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IsInstClass((RuntimeObject*)L_0, SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_2, NULL);
		return L_3;
	}

IL_0016:
	{
		int32_t L_4 = __this->___error_21;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = __this->___error_21;
		return (int32_t)(L_5);
	}

IL_0025:
	{
		return (int32_t)(0);
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___DelayedException_7;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___socket_5;
		NullCheck(L_1);
		L_1->___is_connected_30 = (bool)0;
		Exception_t* L_2 = __this->___DelayedException_7;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_3 = __this->___error_21;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = __this->___socket_5;
		NullCheck(L_4);
		L_4->___is_connected_30 = (bool)0;
		int32_t L_5 = __this->___error_21;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9_RuntimeMethod_var)));
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::CompleteDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_CompleteDisposed_m41B0FF709D71B1B321871B18BCFAAB3005419BAC (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	{
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	int32_t V_1 = 0;
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B7_0 = NULL;
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B6_0 = NULL;
	{
		int32_t L_0 = __this->___operation_6;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___socket_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = Socket_get_CleanedUp_m8F6EDAE37C56CBC282D3EAF9D93B5726EEC85988(L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = __this->___socket_5;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_6 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_6, L_5, NULL);
		__this->___DelayedException_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)L_6);
	}

IL_0031:
	{
		IOAsyncResult_set_IsCompleted_m72D907352B8AC32DF47864E4F4EDFADEC825A6F9(__this, (bool)1, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = __this->___socket_5;
		V_0 = L_7;
		int32_t L_8 = __this->___operation_6;
		V_1 = L_8;
		bool L_9;
		L_9 = IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24_inline(__this, NULL);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_10;
		L_10 = IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_11 = ((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* L_13 = ((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_14 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76_RuntimeMethod_var), NULL);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_15 = L_14;
		((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1), (void*)L_15);
		G_B7_0 = L_15;
	}

IL_0075:
	{
		bool L_16;
		L_16 = ThreadPool_UnsafeQueueUserWorkItem_m05CF00E355CE07D625386779E3F3D3D2341FEE86(G_B7_0, __this, NULL);
	}

IL_007c:
	{
		int32_t L_17 = V_1;
		switch (L_17)
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_00b3;
			}
			case 3:
			{
				goto IL_00b3;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00cc;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00cc;
			}
			case 9:
			{
				goto IL_00cc;
			}
			case 10:
			{
				goto IL_00b3;
			}
			case 11:
			{
				goto IL_00c0;
			}
		}
	}
	{
		return;
	}

IL_00b3:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_18 = V_0;
		NullCheck(L_18);
		SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* L_19 = L_18->___ReadSem_26;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = SemaphoreSlim_Release_m4F3CB668D91DEE067A67266C266FEE5AADF56148(L_19, NULL);
		return;
	}

IL_00c0:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_21 = V_0;
		NullCheck(L_21);
		SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* L_22 = L_21->___WriteSem_27;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = SemaphoreSlim_Release_m4F3CB668D91DEE067A67266C266FEE5AADF56148(L_22, NULL);
	}

IL_00cc:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m218F8233E7ADB1AFFE69406F6337E09726E640D2 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, bool ___synch0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___synch0;
		IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline(__this, L_0, NULL);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, int32_t ___total0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___total0;
		__this->___Total_20 = L_0;
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m6F201277AC561C7A755617A4963735B70D178B12 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Exception_t* ___e0, bool ___synch1, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___e0;
		__this->___DelayedException_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)L_0);
		bool L_1 = ___synch1;
		IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline(__this, L_1, NULL);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___e0;
		__this->___DelayedException_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)L_0);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mD191B47C619B02AB538B7A00721E689AAFBBD3EA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___s0;
		__this->___AcceptedSocket_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AcceptedSocket_19), (void*)L_0);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m85EF6089B3B9ECB2A9737E9C694BCCFFEAE48CF1 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, int32_t ___total1, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___s0;
		__this->___AcceptedSocket_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AcceptedSocket_19), (void*)L_0);
		int32_t L_1 = ___total1;
		__this->___Total_20 = L_1;
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7B1D6CBE8BBE98411F97B3A4327AFA320BB7C32E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* L_0 = (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45*)il2cpp_codegen_object_new(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26(L_0, NULL);
		((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26 (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76 (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___state0;
		NullCheck(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)));
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_1;
		L_1 = IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		RuntimeObject* L_2 = ___state0;
		NullCheck(L_1);
		AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline(L_1, ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_2, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Net.Security.SslClientAuthenticationOptions::get_TargetHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SslClientAuthenticationOptions_get_TargetHost_mC4CF1905E7B4F8193544D4997E305406B976A797 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void System.Net.Security.SslClientAuthenticationOptions::set_TargetHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_TargetHost_m0D8FF94F267DC51F2BDE6E1C94C2CD67783C4019 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTargetHostU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetHostU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Security.SslClientAuthenticationOptions::get_ClientCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* SslClientAuthenticationOptions_get_ClientCertificates_mD6898001726E82ADD9E3083D78BD05DB619B313C (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = __this->___U3CClientCertificatesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void System.Net.Security.SslClientAuthenticationOptions::set_ClientCertificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_ClientCertificates_m08B053F1C158912EEA43A4A28D37A740041CA78B (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___value0;
		__this->___U3CClientCertificatesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificatesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void System.Net.Security.SslClientAuthenticationOptions::set_CertificateRevocationCheckMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_CertificateRevocationCheckMode_m5DB15346690DAC5A8F610AA8C7DEC7F2DFC29DE9 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73E7438EC9EFF139A2E1CEA81F03B87F9EF5CF0A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslClientAuthenticationOptions_set_CertificateRevocationCheckMode_m5DB15346690DAC5A8F610AA8C7DEC7F2DFC29DE9_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___value0;
		__this->____checkCertificateRevocation_1 = L_5;
		return;
	}
}
// System.Void System.Net.Security.SslClientAuthenticationOptions::set_EncryptionPolicy(System.Net.Security.EncryptionPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_EncryptionPolicy_m008E6F28D3C4BFEFFB32A9BEA6AEF1C2B53F1C77 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9340620E0F239BC39D9B1AA9CCF6119A0BB3FF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslClientAuthenticationOptions_set_EncryptionPolicy_m008E6F28D3C4BFEFFB32A9BEA6AEF1C2B53F1C77_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___value0;
		__this->____encryptionPolicy_0 = L_5;
		return;
	}
}
// System.Security.Authentication.SslProtocols System.Net.Security.SslClientAuthenticationOptions::get_EnabledSslProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslClientAuthenticationOptions_get_EnabledSslProtocols_mEC43F31DCFB3322900792809C72AC48070A9D93B (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____enabledSslProtocols_2;
		return L_0;
	}
}
// System.Void System.Net.Security.SslClientAuthenticationOptions::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_EnabledSslProtocols_mC0D304F69A5DC05292B87E00A73415BC83A632D5 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____enabledSslProtocols_2 = L_0;
		return;
	}
}
// System.Void System.Net.Security.SslClientAuthenticationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions__ctor_mFFA8C3E39592A8376E7C3F6AC6FB89A6B7A702CD (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		__this->____allowRenegotiation_3 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Net.Security.SslServerAuthenticationOptions::get_ClientCertificateRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslServerAuthenticationOptions_get_ClientCertificateRequired_mD383FFDB61C59FD5568DFE8B6CDED914AB9977B3 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CClientCertificateRequiredU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void System.Net.Security.SslServerAuthenticationOptions::set_ClientCertificateRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_ClientCertificateRequired_m30FD56EF277CCC34618D4BE98CFC4B541A8AF822 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CClientCertificateRequiredU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslServerAuthenticationOptions::get_ServerCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* SslServerAuthenticationOptions_get_ServerCertificate_m7B4C5BBA8FE842496FA13E51D45BE6833671E980 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_0 = __this->___U3CServerCertificateU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void System.Net.Security.SslServerAuthenticationOptions::set_ServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_ServerCertificate_mBA59C3095AB36F693A8DDF611E7EBE5D2AAC51E1 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___value0, const RuntimeMethod* method) 
{
	{
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_0 = ___value0;
		__this->___U3CServerCertificateU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerCertificateU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Security.Authentication.SslProtocols System.Net.Security.SslServerAuthenticationOptions::get_EnabledSslProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslServerAuthenticationOptions_get_EnabledSslProtocols_m31B8C712D5D3A161E9EC3CE855D7FA44F8E98012 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____enabledSslProtocols_1;
		return L_0;
	}
}
// System.Void System.Net.Security.SslServerAuthenticationOptions::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_EnabledSslProtocols_mC66D59B188A010F1B1726EA34BF61E6DFE5A51A0 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____enabledSslProtocols_1 = L_0;
		return;
	}
}
// System.Void System.Net.Security.SslServerAuthenticationOptions::set_CertificateRevocationCheckMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_CertificateRevocationCheckMode_mCB4596F4D3F547C63E3029612C713F90EF28854C (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73E7438EC9EFF139A2E1CEA81F03B87F9EF5CF0A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslServerAuthenticationOptions_set_CertificateRevocationCheckMode_mCB4596F4D3F547C63E3029612C713F90EF28854C_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___value0;
		__this->____checkCertificateRevocation_0 = L_5;
		return;
	}
}
// System.Void System.Net.Security.SslServerAuthenticationOptions::set_EncryptionPolicy(System.Net.Security.EncryptionPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_EncryptionPolicy_m88D26CB33718B5E589647926F4264CFF5AC0E909 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9340620E0F239BC39D9B1AA9CCF6119A0BB3FF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslServerAuthenticationOptions_set_EncryptionPolicy_m88D26CB33718B5E589647926F4264CFF5AC0E909_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___value0;
		__this->____encryptionPolicy_2 = L_5;
		return;
	}
}
// System.Void System.Net.Security.SslServerAuthenticationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions__ctor_mDF5CCA0826DF6EFA4ECEDC6CB49A10B96D0A7EEF (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		__this->____allowRenegotiation_3 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___innerStream0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___innerStream0;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		if ((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_1) == ((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_2))))
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var)));
	}

IL_001c:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___innerStream0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___innerStream0;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}

IL_002c:
	{
		String_t* L_8;
		L_8 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F40F39B9F659411903AC93DF93E8658291E5522)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var)));
	}

IL_0041:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___innerStream0;
		__this->____InnerStream_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____InnerStream_5), (void*)L_10);
		bool L_11 = ___leaveInnerStreamOpen1;
		__this->____LeaveStreamOpen_6 = L_11;
		return;
	}
}
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____InnerStream_5;
		return L_0;
	}
}
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___disposing0;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				bool L_2 = __this->____LeaveStreamOpen_6;
				if (!L_2)
				{
					goto IL_0018_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____InnerStream_5;
				NullCheck(L_3);
				VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Flush() */, L_3);
				goto IL_002d;
			}

IL_0018_1:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->____InnerStream_5;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_4);
			}

IL_0023_1:
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_Multicast(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* currentDelegate = reinterpret_cast<LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInst(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStatic(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStaticInvoker(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_ClosedStaticInvoker(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenVirtual(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return VirtualFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInterface(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return InterfaceFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericVirtual(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return GenericVirtualFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericInterface(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return GenericInterfaceFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalCertificateSelectionCallback__ctor_mE4F3A8BFF483881C2634112BB581CA4B07809805 (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_Multicast;
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_Multicast(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* currentDelegate = reinterpret_cast<RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInst(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef bool (*FunctionPointerType) (RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, method);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStatic(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, method);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStaticInvoker(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< bool, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_ClosedStaticInvoker(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< bool, RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenVirtual(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return VirtualFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInterface(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return InterfaceFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericVirtual(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return GenericVirtualFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(method, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericInterface(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	return GenericInterfaceFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(method, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_Multicast;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_Multicast(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* currentDelegate = reinterpret_cast<LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenInst(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	NullCheck(___targetHost0);
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenStatic(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenStaticInvoker(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_ClosedStaticInvoker(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3);
}
// System.Void System.Net.Security.LocalCertSelectionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalCertSelectionCallback__ctor_mA7B36924E69A918A71649CFF95CB361E33317C38 (LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_Multicast;
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9 (LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_Multicast(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___hostName0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* currentDelegate = reinterpret_cast<ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hostName0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenInst(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___hostName0, const RuntimeMethod* method)
{
	NullCheck(___hostName0);
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hostName0, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenStatic(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___hostName0, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hostName0, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenStaticInvoker(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___hostName0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___hostName0);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_ClosedStaticInvoker(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___hostName0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hostName0);
}
// System.Void System.Net.Security.ServerCertSelectionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCertSelectionCallback__ctor_m06DDCEDF49D7A5F0F8494E3E960C7DFC64C64946 (ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_Multicast;
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.ServerCertSelectionCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1 (ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___hostName0, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hostName0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95(__this, NULL);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_11;
		return L_0;
	}
}
// System.String System.Net.Security.SslStream::get_InternalTargetHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SslStream_get_InternalTargetHost_m9434AC1422D463C25B5C5313AC9BE45B095136AE (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95(__this, NULL);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_11;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MobileAuthenticatedStream_get_TargetHost_m572DA701CB3CE3FA4006D5745F9A3B9A52739CAB_inline(L_0, NULL);
		return L_1;
	}
}
// Mono.Net.Security.MobileTlsProvider System.Net.Security.SslStream::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* SslStream_GetProvider_mE1D070C13DB759156659F57AB9DF4D2E397FD85B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* L_0;
		L_0 = MonoTlsProviderFactory_GetProvider_m8684E3A1AFB043FA00DEC4BCF95F8B288C136936(NULL);
		return ((MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017*)CastclassClass((RuntimeObject*)L_0, MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_m9096E6E85E60C4D205A26FA43D121FECEC735484 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback2, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___innerStream0;
		bool L_1 = ___leaveInnerStreamOpen1;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_2 = ___userCertificateValidationCallback2;
		SslStream__ctor_mB4497903594E8A33C14B9A4C4DAB7B16BA2E9B2C(__this, L_0, L_1, L_2, (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*)NULL, NULL);
		return;
	}
}
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_mB4497903594E8A33C14B9A4C4DAB7B16BA2E9B2C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback2, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback3, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___innerStream0;
		bool L_1 = ___leaveInnerStreamOpen1;
		AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357(__this, L_0, L_1, NULL);
		MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* L_2;
		L_2 = SslStream_GetProvider_mE1D070C13DB759156659F57AB9DF4D2E397FD85B(NULL);
		__this->___provider_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___provider_7), (void*)L_2);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_3;
		L_3 = MonoTlsSettings_CopyDefaultSettings_m4B0A3E8B7D106FA7F0D243FB2A0A4B115CD21942(NULL);
		__this->___settings_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings_8), (void*)L_3);
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_4 = ___userCertificateValidationCallback2;
		SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D(__this, L_4, NULL);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_5 = ___userCertificateSelectionCallback3;
		SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B(__this, L_5, NULL);
		MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* L_6 = __this->___provider_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___innerStream0;
		bool L_8 = ___leaveInnerStreamOpen1;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_9 = __this->___settings_8;
		NullCheck(L_6);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_10;
		L_10 = VirtualFuncInvoker4< MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*, SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, bool, MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* >::Invoke(11 /* Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.MobileTlsProvider::CreateSslStream(System.Net.Security.SslStream,System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings) */, L_6, __this, L_7, L_8, L_9);
		__this->___impl_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_11), (void*)L_10);
		return;
	}
}
// System.Void System.Net.Security.SslStream::SetAndVerifyValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___callback0, const RuntimeMethod* method) 
{
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_0 = __this->___validationCallback_9;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_1 = ___callback0;
		__this->___validationCallback_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___validationCallback_9), (void*)L_1);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_2 = __this->___settings_8;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_3 = ___callback0;
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_4;
		L_4 = CallbackHelpers_PublicToMono_m6404DAFAD159E4D91FB5822B4855B6A8F05777EE(L_3, NULL);
		NullCheck(L_2);
		MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline(L_2, L_4, NULL);
		return;
	}

IL_0021:
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_5 = ___callback0;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_6 = __this->___validationCallback_9;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_7 = ___callback0;
		bool L_8;
		L_8 = Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0049;
		}
	}

IL_0032:
	{
		bool L_9 = __this->___explicitSettings_12;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_10 = __this->___settings_8;
		NullCheck(L_10);
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_11;
		L_11 = MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline(L_10, NULL);
		if (!((int32_t)((int32_t)L_9&((!(((RuntimeObject*)(MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0))))
		{
			goto IL_005e;
		}
	}

IL_0049:
	{
		String_t* L_12;
		L_12 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94EC39D9CD015C12CA91AF28F761F4059A1C6437)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F581DC31922CB8BA16D8D1268547106C0D2A599)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D_RuntimeMethod_var)));
	}

IL_005e:
	{
		return;
	}
}
// System.Void System.Net.Security.SslStream::SetAndVerifySelectionCallback(System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_0 = (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_mBE4019B5D6D20FC100DAF52B1172ACF497046370(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_1 = V_0;
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_2 = ___callback0;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_4 = __this->___selectionCallback_10;
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_5 = V_0;
		NullCheck(L_5);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_6 = L_5->___callback_0;
		__this->___selectionCallback_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionCallback_10), (void*)L_6);
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_7 = V_0;
		NullCheck(L_7);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_8 = L_7->___callback_0;
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_9 = __this->___settings_8;
		NullCheck(L_9);
		MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline(L_9, (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3*)NULL, NULL);
		return;
	}

IL_003d:
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_10 = __this->___settings_8;
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_11 = V_0;
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_12 = (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3*)il2cpp_codegen_object_new(MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		MonoLocalCertificateSelectionCallback__ctor_mCA81824D698BD5808E501A9AC4DA99758B69D3FC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline(L_10, L_12, NULL);
		return;
	}

IL_0055:
	{
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_13 = V_0;
		NullCheck(L_13);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_14 = L_13->___callback_0;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_15 = __this->___selectionCallback_10;
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_16 = V_0;
		NullCheck(L_16);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_17 = L_16->___callback_0;
		bool L_18;
		L_18 = Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0(L_15, L_17, NULL);
		if (L_18)
		{
			goto IL_0085;
		}
	}

IL_0070:
	{
		bool L_19 = __this->___explicitSettings_12;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_20 = __this->___settings_8;
		NullCheck(L_20);
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_21;
		L_21 = MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline(L_20, NULL);
		if (!L_21)
		{
			goto IL_009a;
		}
	}

IL_0085:
	{
		String_t* L_22;
		L_22 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94EC39D9CD015C12CA91AF28F761F4059A1C6437)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7432BC139FBCA09AC74A0F2BAE3FBB728A59E72D)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B_RuntimeMethod_var)));
	}

IL_009a:
	{
		return;
	}
}
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_AuthenticateAsClient_mB88736B524C5E2095C51B96634E38E38D759853C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___clientCertificates1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		String_t* L_1 = ___targetHost0;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_2 = ___clientCertificates1;
		int32_t L_3 = ___enabledSslProtocols2;
		bool L_4 = ___checkCertificateRevocation3;
		NullCheck(L_0);
		MobileAuthenticatedStream_AuthenticateAsClient_mEB1237B52A4AB1FF3D7D3E52F61CE78A744973FC(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_AuthenticateAsServer_m5573B24BAE2B574D3AA2023E1070198776919130 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___serverCertificate0, bool ___clientCertificateRequired1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_1 = ___serverCertificate0;
		bool L_2 = ___clientCertificateRequired1;
		int32_t L_3 = ___enabledSslProtocols2;
		bool L_4 = ___checkCertificateRevocation3;
		NullCheck(L_0);
		MobileAuthenticatedStream_AuthenticateAsServer_m38A5035F798D754F9C460A3C4E2B90B673DD9091(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_IsAuthenticated_m5056C714711944DA54B35F6F2A3025A720B49290 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanSeek_mA98FD41EDB70B03DB44F714CE952E128CA9D9B4B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Net.Security.SslStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanRead_m0B2ED5711B4D7C796529F56D7039AD546571FEF2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl_11;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanWrite_mCBCABFAC940539066F34E4480E52E07CA06DA7CE (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl_11;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Int64 System.Net.Security.SslStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_get_Length_mD6515D77DBB57912C598761F67C321B6B16E129C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 System.Net.Security.SslStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_get_Position_mD2DBB36BA22F4620B635557B5748E0928F28B6A2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2_RuntimeMethod_var)));
	}
}
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetLength_m3B8BAE2F8203BB823F1E934195F50842A46E5643 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(26 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25_RuntimeMethod_var)));
	}
}
// System.Void System.Net.Security.SslStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Flush_m61B328FCFEB939DE23740823CE3EB7E8DF3B14A4 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Void System.Net.Security.SslStream::CheckDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_11;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FE6AA6EF03FB6550152903A7B201A6108F728DB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Dispose_m187B76F54E2471469F5B62B8DDB33E11E40EE397 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl_11;
				bool L_2 = ___disposing0;
				if (!((int32_t)(((!(((RuntimeObject*)(MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)&(int32_t)L_2)))
				{
					goto IL_001f_1;
				}
			}
			{
				MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_3 = __this->___impl_11;
				NullCheck(L_3);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
				__this->___impl_11 = (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_11), (void*)(MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*)NULL);
			}

IL_001f_1:
			{
				goto IL_0029;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_Read_mEAFC2AA192D9EAF401E2B067395EA08EDC5FB47E (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Write_mCF650FDF725E1AAEDC462A016A38E535F7210F3C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.Net.Security.SslStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* SslStream_ReadAsync_m0F251A72A8D1C8C41A49CC99AE55D8D0F96A956C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken3;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(19 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task System.Net.Security.SslStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SslStream_WriteAsync_m8211FC8F3FF4552E897516BE6CD70923848B89C3 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken3;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SslStream_BeginRead_m716BC242891C530ECB08DA4989AE27EEBAC71C98 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___state4, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = Stream_ReadAsync_m734E5C146A1217C9E8FEC56ABDBD2AC33F5F8F87(L_0, L_1, L_2, L_3, NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___callback3;
		RuntimeObject* L_6 = ___state4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_EndRead_m881FE67FB5376508CBB50A96ED65BC672FB3A7A0 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncResult0;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		return L_1;
	}
}
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SslStream_BeginWrite_m66F3B2CDAAE0E1FD662552A8D1ECAC889F2AD2D0 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___state4, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_0, L_1, L_2, L_3, NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___callback3;
		RuntimeObject* L_6 = ___state4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_EndWrite_m78C915054198C80ECEE67CBB07D782E10686BA61 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___asyncResult0;
		TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED(L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Security.SslStream/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mBE4019B5D6D20FC100DAF52B1172ACF497046370 (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream/<>c__DisplayClass21_0::<SetAndVerifySelectionCallback>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* __this, String_t* ___t0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___lc1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___rc2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ai3, const RuntimeMethod* method) 
{
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_0 = __this->___callback_0;
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_1 = __this->___U3CU3E4__this_1;
		String_t* L_2 = ___t0;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_3 = ___lc1;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_4 = ___rc2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___ai3;
		NullCheck(L_0);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_6;
		L_6 = LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_inline(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_m34A58D59C771D6EB91D55AE4F97413CD711B8FB5 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		__this->____value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_2);
		return;
	}
}
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_mC4A9C09859A2DFDDDADB72E3CC91DF3C874A45BB (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
// System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultValueAttribute_get_Value_mE5E6819598048D2585D6DB475918E60ACE802470 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultValueAttribute_Equals_m61297DB3C3A7E76FC868A653371853B14BC42FC1 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC*)IsInstClass((RuntimeObject*)L_1, DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC_il2cpp_TypeInfo_var));
		DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, __this);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, __this);
		DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_6);
		return L_7;
	}

IL_002a:
	{
		DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_8);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0034:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultValueAttribute_GetHashCode_m74095EF1526DBFB27CF56AFA21690C77A5289A33 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___state0;
		__this->___browsableState_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)IsInstSealed((RuntimeObject*)L_1, EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var));
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___browsableState_0;
		int32_t L_5 = __this->___browsableState_0;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, bool ___browsable0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___browsable0;
		__this->___U3CBrowsableU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBrowsableU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrowsableAttribute_Equals_m8EF756EC88F170513772F14FC08BDAD1EC2B863D (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* G_B4_0 = NULL;
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* G_B3_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_2 = ((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)IsInstSealed((RuntimeObject*)L_1, BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var));
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3 = V_2;
		G_B5_0 = L_3;
		goto IL_0025;
	}

IL_001b:
	{
		NullCheck(G_B4_0);
		bool L_4;
		L_4 = BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline(G_B4_0, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		bool L_6;
		L_6 = BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline(__this, NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_8 = V_1;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}
}
// System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrowsableAttribute_GetHashCode_m40CEC719AE0A79F4339009D2E473342E59BAEDD1 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		return L_1;
	}
}
// System.Void System.ComponentModel.BrowsableAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrowsableAttribute__cctor_mEE3D932880029AEFB302C723B33DE48D4497A369 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_0 = (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)il2cpp_codegen_object_new(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035(L_0, (bool)1, NULL);
		((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Yes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Yes_0), (void*)L_0);
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_1 = (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)il2cpp_codegen_object_new(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035(L_1, (bool)0, NULL);
		((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___No_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___No_1), (void*)L_1);
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_2 = ((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Yes_0;
		((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Default_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Default_2), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___description0;
		DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline(__this, L_0, NULL);
		return;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline(__this, NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptionAttribute_Equals_m1CD8A994656358F30F29950E0F51F6FDFCA5306A (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)IsInstClass((RuntimeObject*)L_1, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var));
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, __this);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescriptionAttribute_GetHashCode_m611CD3279B54EE7678ED42409F142DF4303A3357 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__cctor_m834DAB71B6D455F27EDFF240E854DC175D402775 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_0 = (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)il2cpp_codegen_object_new(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F(L_0, NULL);
		((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields*)il2cpp_codegen_static_fields_for(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields*)il2cpp_codegen_static_fields_for(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CCategoryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCategoryU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583 (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, String_t* ___category0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___category0;
		__this->___U3CCategoryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCategoryU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77 (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCategoryU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignerCategoryAttribute_Equals_m1AC49F2D111D21ED13E8BA1F2E40C1F3B859260C (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)IsInstSealed((RuntimeObject*)L_1, DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var));
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline(L_3, NULL);
		String_t* L_5;
		L_5 = DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline(__this, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignerCategoryAttribute_GetHashCode_mAAF7FBB9086B1B80FB129D77C2B2E195235A54FA (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__cctor_m2D9C1A5339A186C402AC69970452A5AB62479855 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1842163E600730C192914B1BCFB77A9A809A8070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60081E4C6B9BD5BBFC2D172205F8D7236FF4A669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544);
		s_Il2CppMethodInitialized = true;
	}
	{
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_0 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583(L_0, _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Component_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Component_0), (void*)L_0);
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_1 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB(L_1, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Default_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Default_1), (void*)L_1);
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_2 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583(L_2, _stringLiteral1842163E600730C192914B1BCFB77A9A809A8070, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Form_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Form_2), (void*)L_2);
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_3 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583(L_3, _stringLiteral60081E4C6B9BD5BBFC2D172205F8D7236FF4A669, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Generic_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Generic_3), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1 (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, int32_t ___visibility0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___visibility0;
		__this->___U3CVisibilityU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVisibilityU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignerSerializationVisibilityAttribute_Equals_m0BE73F494AEFD4118E82420382640874637AD94F (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* G_B4_0 = NULL;
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* G_B3_0 = NULL;
	Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_2 = ((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)IsInstSealed((RuntimeObject*)L_1, DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var));
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD));
		Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD L_3 = V_2;
		G_B5_0 = L_3;
		goto IL_0025;
	}

IL_001b:
	{
		NullCheck(G_B4_0);
		int32_t L_4;
		L_4 = DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline(G_B4_0, NULL);
		Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		int32_t L_6;
		L_6 = DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline(__this, NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_inline((&V_0), Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_RuntimeMethod_var);
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_inline((&V_0), Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}
}
// System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_GetHashCode_m33E067E26D97A5A40DD224E33230351C6169579F (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerSerializationVisibilityAttribute__cctor_mAD072BAB004E4D3331CE67CBC6D1012D5916101D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_0 = (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)il2cpp_codegen_object_new(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1(L_0, 2, NULL);
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Content_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Content_0), (void*)L_0);
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_1 = (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)il2cpp_codegen_object_new(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1(L_1, 0, NULL);
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Hidden_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Hidden_1), (void*)L_1);
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_2 = (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)il2cpp_codegen_object_new(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1(L_2, 1, NULL);
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Visible_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Visible_2), (void*)L_2);
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_3 = ((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Visible_2;
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Default_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Default_3), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___displayName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___displayName0;
		DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline(__this, L_0, NULL);
		return;
	}
}
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayName_mA3E91855E1EAC0085BF2C1EB501B7801B9563D5D (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline(__this, NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::set_DisplayNameValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.DisplayNameAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameAttribute_Equals_m06E1BC5B48A9D42FECF4BEC20338F8DD6A525E88 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)IsInstClass((RuntimeObject*)L_1, DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var));
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, __this);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DisplayNameAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayNameAttribute_GetHashCode_m882BB47C783C5D55149DB892F41108D4953B8B16 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__cctor_mD9A9030A1931AD6CDF0428CFEC3E34B91652A8F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_0 = (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)il2cpp_codegen_object_new(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968(L_0, NULL);
		((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields*)il2cpp_codegen_static_fields_for(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields*)il2cpp_codegen_static_fields_for(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* V_0 = NULL;
	{
		V_0 = (ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD*)NULL;
		Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_0 = __this->____parent_1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_1 = __this->____parent_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___key0;
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_4;
		L_4 = EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_001f:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_5 = V_0;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (Delegate_t*)NULL;
	}

IL_0024:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_6 = V_0;
		NullCheck(L_6);
		Delegate_t* L_7 = L_6->____handler_2;
		return L_7;
	}
}
// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* V_0 = NULL;
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_0 = __this->____head_0;
		V_0 = L_0;
		goto IL_0019;
	}

IL_0009:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->____key_1;
		RuntimeObject* L_3 = ___key0;
		if ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_4 = V_0;
		NullCheck(L_4);
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_5 = L_4->____next_0;
		V_0 = L_5;
	}

IL_0019:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_6 = V_0;
		if (L_6)
		{
			goto IL_0009;
		}
	}

IL_001c:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_m30DFADC9DAE3067EBFB7AF17F9EE5DBAF5B00D10 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, const RuntimeMethod* method) 
{
	{
		InvalidEnumArgumentException__ctor_mB48FBD0C68C97EF69D80B56EB927CAF08E3181E1(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_mB48FBD0C68C97EF69D80B56EB927CAF08E3181E1 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_mB6DA9F3F2403BFA3AAD577AA4A27034D29A60EB4 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, String_t* ___argumentName0, int32_t ___invalidValue1, Type_t* ___enumClass2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443F4C4E0724E859C348938724B926BE877FC5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___argumentName0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___invalidValue1), L_1, NULL);
		Type_t* L_3 = ___enumClass2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = SR_Format_m250FFAE6A6F747F6E6D4BB6EA43A757E347CD51D(_stringLiteral443F4C4E0724E859C348938724B926BE877FC5FE, L_0, L_2, L_4, NULL);
		String_t* L_6 = ___argumentName0;
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(__this, L_5, L_6, NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_m05AB9EBB8AEDE6DF1BFE1E8E7F2BA4EB303DAA13 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		ArgumentException__ctor_mB4FA5CCA0CDB08730E9ED40FA935BA38C032D83A(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B (ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C* __this, const RuntimeMethod* method) 
{
	{
		CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BooleanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87 (BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DecimalConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46 (DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.DefaultEventAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultEventAttribute_Equals_m1B7CE5677AFA75A3AD6223345C99D5EA796622B2 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07*)IsInstSealed((RuntimeObject*)L_0, DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var));
		DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline(L_2, NULL);
		String_t* L_4;
		L_4 = DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultEventAttribute_GetHashCode_mD3A5713780914BA883AF0AB0AD88E5427D910184 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultEventAttribute__cctor_m8F7247E7092040D01936116D0D07453F983A06E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* L_0 = (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07*)il2cpp_codegen_object_new(DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46(L_0, (String_t*)NULL, NULL);
		((DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_StaticFields*)il2cpp_codegen_static_fields_for(DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var))->___Default_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_StaticFields*)il2cpp_codegen_static_fields_for(DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var))->___Default_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890 (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultPropertyAttribute_Equals_mCD709C4B3F90DDDBDB45AE2969732EA3775CF26E (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4*)IsInstSealed((RuntimeObject*)L_0, DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var));
		DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline(L_2, NULL);
		String_t* L_4;
		L_4 = DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultPropertyAttribute_GetHashCode_m401BC4A948F7890DDD718B884C6CE06296578BA2 (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPropertyAttribute__cctor_mE7CC9E813F3663E5D55E5F2FA52D6E1A8C0040E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* L_0 = (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4*)il2cpp_codegen_object_new(DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A(L_0, (String_t*)NULL, NULL);
		((DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_StaticFields*)il2cpp_codegen_static_fields_for(DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var))->___Default_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_StaticFields*)il2cpp_codegen_static_fields_for(DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var))->___Default_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946 (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, bool ___visible0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___visible0;
		__this->___U3CVisibleU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibleU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_Equals_m59ADCA70D1F8363BAACDC37274852A8E6C9A954A (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)IsInstSealed((RuntimeObject*)L_1, DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var));
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline(L_3, NULL);
		bool L_5;
		L_5 = DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline(__this, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DesignTimeVisibleAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignTimeVisibleAttribute_GetHashCode_m4E2FF875B5BD47A6C7EDCB5F9CB66D6860F5132B (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		bool L_3;
		L_3 = DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline(__this, NULL);
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignTimeVisibleAttribute__cctor_m60EE97AF27C65BA7BD5BC1FC200B7B261BD3F084 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_0 = (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)il2cpp_codegen_object_new(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946(L_0, (bool)1, NULL);
		((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Yes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Yes_1), (void*)L_0);
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_1 = (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)il2cpp_codegen_object_new(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946(L_1, (bool)0, NULL);
		((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___No_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___No_2), (void*)L_1);
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_2 = ((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Yes_1;
		((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Default_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Default_3), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DoubleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA (DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int16Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF (Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int32Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF (Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int64Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C (Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceConverter__ctor_mECD358A5C07B37EFD8659FDEF4C067A16E51171E (ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->____type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____type_3), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.ReferenceConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceConverter__cctor_m7A6A35413E4F4527499053D28FDEFB4BB91AC1A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_StaticFields*)il2cpp_codegen_static_fields_for(ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var))->___s_none_2 = _stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B;
		Il2CppCodeGenWriteBarrier((void**)(&((ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_StaticFields*)il2cpp_codegen_static_fields_for(ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var))->___s_none_2), (void*)_stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.SingleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A (SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.StringConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A (StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5 (TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)IsInstSealed((RuntimeObject*)L_0, TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(L_2, NULL);
		String_t* L_4;
		L_4 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__cctor_m7A206154E18C66B9CEA6934D8AFB1AE9DA4EA666 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_0 = (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)il2cpp_codegen_object_new(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9(L_0, NULL);
		((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.CategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CategoryAttribute__ctor_mE335AC5BA8DDFA32333CCB2FC7317BB8FEF241F8 (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, String_t* ___category0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___category0;
		__this->___categoryValue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categoryValue_1), (void*)L_0);
		__this->___localized_0 = (bool)0;
		return;
	}
}
// System.String System.ComponentModel.CategoryAttribute::get_Category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0 = __this->___localized_0;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		__this->___localized_0 = (bool)1;
		String_t* L_1 = __this->___categoryValue_1;
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.ComponentModel.CategoryAttribute::GetLocalizedString(System.String) */, __this, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = V_0;
		__this->___categoryValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categoryValue_1), (void*)L_4);
	}

IL_0026:
	{
		String_t* L_5 = __this->___categoryValue_1;
		return L_5;
	}
}
// System.Boolean System.ComponentModel.CategoryAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CategoryAttribute_Equals_m5BF5E549FD06B7512CAC45D1FF44CC872B5313B9 (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB*)IsInstClass((RuntimeObject*)L_1, CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2;
		L_2 = CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB(__this, NULL);
		RuntimeObject* L_3 = ___obj0;
		NullCheck(((CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB*)CastclassClass((RuntimeObject*)L_3, CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_il2cpp_TypeInfo_var)));
		String_t* L_4;
		L_4 = CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB(((CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB*)CastclassClass((RuntimeObject*)L_3, CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.CategoryAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CategoryAttribute_GetHashCode_mE3A504D14CB376A21493D5CB95F10E3AFE623AEC (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String System.ComponentModel.CategoryAttribute::GetLocalizedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CategoryAttribute_GetLocalizedString_m3E3EBF770556B182CF4234BE32C1A10C49AE3D9C (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138938A63672EEB2629F899313126D92DFB6DE16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F85BE44F7DC01CA0EC942D07BDDFEA8EF186252);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42B9F0F106EADBC5A6D35B0C706AB9041D29C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CC2FEA880A089FA5B6DB02498B4783DC9BDA299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C0C5D6DEFFF553F1A16F55E32CB5DD206B4779);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E726DA69119456565965AD4A7E41D2FD45369DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CDA7C69956AC5A33C80AA1964D740023C8C99F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F87426D22AEE44544168F0CDC2ECCEE865ABCA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F7BBA3AABC787815F5A83054BA163D213D1763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E3C16C9C1A5D04CF77B335EB6F14AD0DCC7645);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___value0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1762750224)))))
		{
			goto IL_0096;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)723360612)))))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)521774151)))))
		{
			goto IL_003d;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)175614239))))
		{
			goto IL_0117;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)521774151))))
		{
			goto IL_0141;
		}
	}
	{
		goto IL_02b2;
	}

IL_003d:
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)676498961))))
		{
			goto IL_0234;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)723360612))))
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b2;
	}

IL_0058:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1041509726)))))
		{
			goto IL_007b;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)822184863))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1041509726))))
		{
			goto IL_0225;
		}
	}
	{
		goto IL_02b2;
	}

IL_007b:
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1062369733))))
		{
			goto IL_0156;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1762750224))))
		{
			goto IL_016b;
		}
	}
	{
		goto IL_02b2;
	}

IL_0096:
	{
		uint32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-1135103565)))))
		{
			goto IL_00dc;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-1926678623)))))
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1779622119))))
		{
			goto IL_0243;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1926678623))))
		{
			goto IL_01d4;
		}
	}
	{
		goto IL_02b2;
	}

IL_00c1:
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1485152592))))
		{
			goto IL_01aa;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1135103565))))
		{
			goto IL_0195;
		}
	}
	{
		goto IL_02b2;
	}

IL_00dc:
	{
		uint32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-494980054)))))
		{
			goto IL_00ff;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-853882612))))
		{
			goto IL_01bf;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-494980054))))
		{
			goto IL_0213;
		}
	}
	{
		goto IL_02b2;
	}

IL_00ff:
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-393411857))))
		{
			goto IL_0180;
		}
	}
	{
		uint32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-142065121))))
		{
			goto IL_01e9;
		}
	}
	{
		goto IL_02b2;
	}

IL_0117:
	{
		String_t* L_25 = ___value0;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD, NULL);
		if (L_26)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_02b2;
	}

IL_012c:
	{
		String_t* L_27 = ___value0;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteralC1E3C16C9C1A5D04CF77B335EB6F14AD0DCC7645, NULL);
		if (L_28)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02b2;
	}

IL_0141:
	{
		String_t* L_29 = ___value0;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral8F87426D22AEE44544168F0CDC2ECCEE865ABCA6, NULL);
		if (L_30)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_02b2;
	}

IL_0156:
	{
		String_t* L_31 = ___value0;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F, NULL);
		if (L_32)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_02b2;
	}

IL_016b:
	{
		String_t* L_33 = ___value0;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral8CDA7C69956AC5A33C80AA1964D740023C8C99F9, NULL);
		if (L_34)
		{
			goto IL_026a;
		}
	}
	{
		goto IL_02b2;
	}

IL_0180:
	{
		String_t* L_35 = ___value0;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral5CC2FEA880A089FA5B6DB02498B4783DC9BDA299, NULL);
		if (L_36)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_02b2;
	}

IL_0195:
	{
		String_t* L_37 = ___value0;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral71C0C5D6DEFFF553F1A16F55E32CB5DD206B4779, NULL);
		if (L_38)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_02b2;
	}

IL_01aa:
	{
		String_t* L_39 = ___value0;
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral138938A63672EEB2629F899313126D92DFB6DE16, NULL);
		if (L_40)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b2;
	}

IL_01bf:
	{
		String_t* L_41 = ___value0;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
		if (L_42)
		{
			goto IL_0282;
		}
	}
	{
		goto IL_02b2;
	}

IL_01d4:
	{
		String_t* L_43 = ___value0;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral7E726DA69119456565965AD4A7E41D2FD45369DC, NULL);
		if (L_44)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_02b2;
	}

IL_01e9:
	{
		String_t* L_45 = ___value0;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral3F42B9F0F106EADBC5A6D35B0C706AB9041D29C8, NULL);
		if (L_46)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_02b2;
	}

IL_01fe:
	{
		String_t* L_47 = ___value0;
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, NULL);
		if (L_48)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02b2;
	}

IL_0213:
	{
		String_t* L_49 = ___value0;
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F, NULL);
		if (L_50)
		{
			goto IL_029a;
		}
	}
	{
		goto IL_02b2;
	}

IL_0225:
	{
		String_t* L_51 = ___value0;
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9, NULL);
		if (L_52)
		{
			goto IL_02a0;
		}
	}
	{
		goto IL_02b2;
	}

IL_0234:
	{
		String_t* L_53 = ___value0;
		bool L_54;
		L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103, NULL);
		if (L_54)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02b2;
	}

IL_0243:
	{
		String_t* L_55 = ___value0;
		bool L_56;
		L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteralA7F7BBA3AABC787815F5A83054BA163D213D1763, NULL);
		if (L_56)
		{
			goto IL_02ac;
		}
	}
	{
		goto IL_02b2;
	}

IL_0252:
	{
		return _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
	}

IL_0258:
	{
		return _stringLiteralC1E3C16C9C1A5D04CF77B335EB6F14AD0DCC7645;
	}

IL_025e:
	{
		return _stringLiteral8F87426D22AEE44544168F0CDC2ECCEE865ABCA6;
	}

IL_0264:
	{
		return _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F;
	}

IL_026a:
	{
		return _stringLiteral8CDA7C69956AC5A33C80AA1964D740023C8C99F9;
	}

IL_0270:
	{
		return _stringLiteral5CC2FEA880A089FA5B6DB02498B4783DC9BDA299;
	}

IL_0276:
	{
		return _stringLiteral71C0C5D6DEFFF553F1A16F55E32CB5DD206B4779;
	}

IL_027c:
	{
		return _stringLiteral138938A63672EEB2629F899313126D92DFB6DE16;
	}

IL_0282:
	{
		return _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
	}

IL_0288:
	{
		return _stringLiteral7E726DA69119456565965AD4A7E41D2FD45369DC;
	}

IL_028e:
	{
		return _stringLiteral3F42B9F0F106EADBC5A6D35B0C706AB9041D29C8;
	}

IL_0294:
	{
		return _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
	}

IL_029a:
	{
		return _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F;
	}

IL_02a0:
	{
		return _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
	}

IL_02a6:
	{
		return _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103;
	}

IL_02ac:
	{
		return _stringLiteral2F85BE44F7DC01CA0EC942D07BDDFEA8EF186252;
	}

IL_02b2:
	{
		String_t* L_57 = ___value0;
		return L_57;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Component::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Finalize_m124F6FA2207E76C9DF18740E653C49D483A6E5C6 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.ComponentModel.Component::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_CanRaiseEvents_m23993A519269D33F515ADADAB081C6ADF1551AF4 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.ComponentModel.Component::get_CanRaiseEvents() */, __this);
		return L_0;
	}
}
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.ComponentModel.Component::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_mD106692D0A494758CFFA2C9ACC0D7F94DD389192 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContainer_t717EF6801E89E9463045041A0C482723AC06DA86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* V_0 = NULL;
	bool V_1 = false;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006d;
					}
				}
				{
					Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				RuntimeObject* L_4 = __this->___site_2;
				if (!L_4)
				{
					goto IL_0035_1;
				}
			}
			{
				RuntimeObject* L_5 = __this->___site_2;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_5);
				if (!L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				RuntimeObject* L_7 = __this->___site_2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_7);
				NullCheck(L_8);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent) */, IContainer_t717EF6801E89E9463045041A0C482723AC06DA86_il2cpp_TypeInfo_var, L_8, __this);
			}

IL_0035_1:
			{
				EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_9 = __this->___events_3;
				if (!L_9)
				{
					goto IL_0062_1;
				}
			}
			{
				EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_10 = __this->___events_3;
				il2cpp_codegen_runtime_class_init_inline(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
				RuntimeObject* L_11 = ((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields*)il2cpp_codegen_static_fields_for(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var))->___EventDisposed_1;
				NullCheck(L_10);
				Delegate_t* L_12;
				L_12 = EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7(L_10, L_11, NULL);
				V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_12, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = V_2;
				if (!L_13)
				{
					goto IL_0062_1;
				}
			}
			{
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_14 = V_2;
				il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
				EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_15 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
				NullCheck(L_14);
				EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_14, __this, L_15, NULL);
			}

IL_0062_1:
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		return;
	}
}
// System.Object System.ComponentModel.Component::GetService(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetService_mBAA7A515C81E800F2EEF6B796A5C4AA7C08B0A57 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, Type_t* ___service0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___site_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		Type_t* L_3 = ___service0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		return NULL;
	}
}
// System.Boolean System.ComponentModel.Component::get_DesignMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_DesignMode_m1F9F6A7CF2856B86B6571430C7F403A6393B90F0 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___site_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.ComponentModel.ISite::get_DesignMode() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.String System.ComponentModel.Component::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_ToString_m6B31E5C41739F547FD9F10B6439E8C3F1E15EBC3 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___site_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_2);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_3, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5, L_5, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_6;
	}

IL_002b:
	{
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_7);
		return L_8;
	}
}
// System.Void System.ComponentModel.Component::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__ctor_mDA70A27899B8D66203C57A3E8678A11E033B4DF6 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538(__this, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Component::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__cctor_mFA01BE8B3C6836B029B2E607352AF2E0D3D10057 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields*)il2cpp_codegen_static_fields_for(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var))->___EventDisposed_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields*)il2cpp_codegen_static_fields_for(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var))->___EventDisposed_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ComponentConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentConverter__ctor_m55556BF96FD3D27C7D9F5B413514A01DF0A3911C (ComponentConverter_tFE75D55373FA41F9E4EC733FEDC24C8166A3D7CE* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var);
		ReferenceConverter__ctor_mECD358A5C07B37EFD8659FDEF4C067A16E51171E(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B (EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->___type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Win32Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m0B20F25EC4A56A122FF766429AF40AF6292E11B1 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
		Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___error0;
		int32_t L_1 = ___error0;
		String_t* L_2;
		L_2 = Win32Exception_GetErrorMessage_m4DF2B191F4BBBF3B7AC82CE276E3E62F0A9159CC(L_1, NULL);
		Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message1;
		ExternalException__ctor_m289660079DD06ADACDAABE3BC8948AF7C73A8602(__this, L_0, NULL);
		int32_t L_1 = ___error0;
		__this->___nativeErrorCode_18 = L_1;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		ExternalException__ctor_m3B89FDD35A0B6E96CE69B2FAD48FB832402167AC(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, NULL);
		__this->___nativeErrorCode_18 = L_3;
		return;
	}
}
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___nativeErrorCode_18;
		return L_0;
	}
}
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		int32_t L_3 = __this->___nativeErrorCode_18;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_5 = ___context1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_4, L_5, NULL);
		return;
	}
}
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_m4DF2B191F4BBBF3B7AC82CE276E3E62F0A9159CC (int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CAB08554552B91BA981CD02709F3608049743F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8398C464CEF2A8E224363DAF635848402299705A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89228C2272C203A431928EA4D77EC3641DC74018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98086E81726E63C07D5EE51033D818164107DDF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC705511F599E168CB4A19DE96F050E694A04892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___error0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)120))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_1 = ___error0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)33))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_2 = ___error0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_02f1;
			}
			case 1:
			{
				goto IL_04e9;
			}
			case 2:
			{
				goto IL_02f7;
			}
			case 3:
			{
				goto IL_02fd;
			}
			case 4:
			{
				goto IL_0303;
			}
			case 5:
			{
				goto IL_0309;
			}
			case 6:
			{
				goto IL_030f;
			}
			case 7:
			{
				goto IL_04e9;
			}
			case 8:
			{
				goto IL_04e9;
			}
			case 9:
			{
				goto IL_04e9;
			}
			case 10:
			{
				goto IL_04e9;
			}
			case 11:
			{
				goto IL_04e9;
			}
			case 12:
			{
				goto IL_04e9;
			}
			case 13:
			{
				goto IL_0315;
			}
			case 14:
			{
				goto IL_031b;
			}
			case 15:
			{
				goto IL_04e9;
			}
			case 16:
			{
				goto IL_04e9;
			}
			case 17:
			{
				goto IL_0321;
			}
			case 18:
			{
				goto IL_0327;
			}
		}
	}
	{
		int32_t L_3 = ___error0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)24))))
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_4 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)31))))
		{
			case 0:
			{
				goto IL_0333;
			}
			case 1:
			{
				goto IL_0339;
			}
			case 2:
			{
				goto IL_033f;
			}
		}
	}
	{
		goto IL_04e9;
	}

IL_0081:
	{
		int32_t L_5 = ___error0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)55))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_6 = ___error0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)50))))
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_7 = ___error0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)55))))
		{
			goto IL_034b;
		}
	}
	{
		goto IL_04e9;
	}

IL_009b:
	{
		int32_t L_8 = ___error0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)87))))
		{
			goto IL_0351;
		}
	}
	{
		int32_t L_9 = ___error0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)120))))
		{
			goto IL_0357;
		}
	}
	{
		goto IL_04e9;
	}

IL_00b0:
	{
		int32_t L_10 = ___error0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)267))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_11 = ___error0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)127))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_12 = ___error0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)123))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_13 = ___error0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)127))))
		{
			goto IL_0363;
		}
	}
	{
		goto IL_04e9;
	}

IL_00d2:
	{
		int32_t L_14 = ___error0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)183))))
		{
			goto IL_0369;
		}
	}
	{
		int32_t L_15 = ___error0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)267))))
		{
			goto IL_036f;
		}
	}
	{
		goto IL_04e9;
	}

IL_00ed:
	{
		int32_t L_16 = ___error0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)6000))))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_17 = ___error0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)995))))
		{
			goto IL_0375;
		}
	}
	{
		int32_t L_18 = ___error0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)6000))))
		{
			goto IL_037b;
		}
	}
	{
		goto IL_04e9;
	}

IL_0110:
	{
		int32_t L_19 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)10004))))
		{
			case 0:
			{
				goto IL_0381;
			}
			case 1:
			{
				goto IL_04e9;
			}
			case 2:
			{
				goto IL_04e9;
			}
			case 3:
			{
				goto IL_04e9;
			}
			case 4:
			{
				goto IL_04e9;
			}
			case 5:
			{
				goto IL_0387;
			}
			case 6:
			{
				goto IL_04e9;
			}
			case 7:
			{
				goto IL_04e9;
			}
			case 8:
			{
				goto IL_04e9;
			}
			case 9:
			{
				goto IL_038d;
			}
			case 10:
			{
				goto IL_0393;
			}
			case 11:
			{
				goto IL_04e9;
			}
			case 12:
			{
				goto IL_04e9;
			}
			case 13:
			{
				goto IL_04e9;
			}
			case 14:
			{
				goto IL_04e9;
			}
			case 15:
			{
				goto IL_04e9;
			}
			case 16:
			{
				goto IL_04e9;
			}
			case 17:
			{
				goto IL_04e9;
			}
			case 18:
			{
				goto IL_0399;
			}
			case 19:
			{
				goto IL_04e9;
			}
			case 20:
			{
				goto IL_039f;
			}
			case 21:
			{
				goto IL_04e9;
			}
			case 22:
			{
				goto IL_04e9;
			}
			case 23:
			{
				goto IL_04e9;
			}
			case 24:
			{
				goto IL_04e9;
			}
			case 25:
			{
				goto IL_04e9;
			}
			case 26:
			{
				goto IL_04e9;
			}
			case 27:
			{
				goto IL_04e9;
			}
			case 28:
			{
				goto IL_04e9;
			}
			case 29:
			{
				goto IL_04e9;
			}
			case 30:
			{
				goto IL_04e9;
			}
			case 31:
			{
				goto IL_03a5;
			}
			case 32:
			{
				goto IL_03ab;
			}
			case 33:
			{
				goto IL_03b1;
			}
			case 34:
			{
				goto IL_03b7;
			}
			case 35:
			{
				goto IL_03bd;
			}
			case 36:
			{
				goto IL_03c3;
			}
			case 37:
			{
				goto IL_03c9;
			}
			case 38:
			{
				goto IL_03cf;
			}
			case 39:
			{
				goto IL_03d5;
			}
			case 40:
			{
				goto IL_03db;
			}
			case 41:
			{
				goto IL_03e1;
			}
			case 42:
			{
				goto IL_03e7;
			}
			case 43:
			{
				goto IL_03ed;
			}
			case 44:
			{
				goto IL_03f3;
			}
			case 45:
			{
				goto IL_03f9;
			}
			case 46:
			{
				goto IL_03ff;
			}
			case 47:
			{
				goto IL_0405;
			}
			case 48:
			{
				goto IL_040b;
			}
			case 49:
			{
				goto IL_0411;
			}
			case 50:
			{
				goto IL_0417;
			}
			case 51:
			{
				goto IL_041d;
			}
			case 52:
			{
				goto IL_0423;
			}
			case 53:
			{
				goto IL_0429;
			}
			case 54:
			{
				goto IL_042f;
			}
			case 55:
			{
				goto IL_0435;
			}
			case 56:
			{
				goto IL_043b;
			}
			case 57:
			{
				goto IL_0441;
			}
			case 58:
			{
				goto IL_0447;
			}
			case 59:
			{
				goto IL_044d;
			}
			case 60:
			{
				goto IL_0453;
			}
			case 61:
			{
				goto IL_0459;
			}
			case 62:
			{
				goto IL_045f;
			}
			case 63:
			{
				goto IL_0465;
			}
			case 64:
			{
				goto IL_046b;
			}
			case 65:
			{
				goto IL_0471;
			}
			case 66:
			{
				goto IL_0477;
			}
			case 67:
			{
				goto IL_047d;
			}
			case 68:
			{
				goto IL_04e9;
			}
			case 69:
			{
				goto IL_04e9;
			}
			case 70:
			{
				goto IL_04e9;
			}
			case 71:
			{
				goto IL_04e9;
			}
			case 72:
			{
				goto IL_04e9;
			}
			case 73:
			{
				goto IL_04e9;
			}
			case 74:
			{
				goto IL_04e9;
			}
			case 75:
			{
				goto IL_04e9;
			}
			case 76:
			{
				goto IL_04e9;
			}
			case 77:
			{
				goto IL_04e9;
			}
			case 78:
			{
				goto IL_04e9;
			}
			case 79:
			{
				goto IL_04e9;
			}
			case 80:
			{
				goto IL_04e9;
			}
			case 81:
			{
				goto IL_04e9;
			}
			case 82:
			{
				goto IL_04e9;
			}
			case 83:
			{
				goto IL_04e9;
			}
			case 84:
			{
				goto IL_04e9;
			}
			case 85:
			{
				goto IL_04e9;
			}
			case 86:
			{
				goto IL_04e9;
			}
			case 87:
			{
				goto IL_0483;
			}
			case 88:
			{
				goto IL_0489;
			}
			case 89:
			{
				goto IL_048f;
			}
			case 90:
			{
				goto IL_04e9;
			}
			case 91:
			{
				goto IL_04e9;
			}
			case 92:
			{
				goto IL_04e9;
			}
			case 93:
			{
				goto IL_04e9;
			}
			case 94:
			{
				goto IL_04e9;
			}
			case 95:
			{
				goto IL_04e9;
			}
			case 96:
			{
				goto IL_04e9;
			}
			case 97:
			{
				goto IL_0495;
			}
			case 98:
			{
				goto IL_049b;
			}
			case 99:
			{
				goto IL_04a1;
			}
			case 100:
			{
				goto IL_04a7;
			}
			case 101:
			{
				goto IL_04ad;
			}
			case 102:
			{
				goto IL_04b3;
			}
			case 103:
			{
				goto IL_04b9;
			}
			case 104:
			{
				goto IL_04bf;
			}
			case 105:
			{
				goto IL_04c5;
			}
			case 106:
			{
				goto IL_04e9;
			}
			case 107:
			{
				goto IL_04e9;
			}
			case 108:
			{
				goto IL_04cb;
			}
		}
	}
	{
		int32_t L_20 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)11001))))
		{
			case 0:
			{
				goto IL_04d1;
			}
			case 1:
			{
				goto IL_04d7;
			}
			case 2:
			{
				goto IL_04dd;
			}
			case 3:
			{
				goto IL_04e3;
			}
		}
	}
	{
		goto IL_04e9;
	}

IL_02f1:
	{
		return _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
	}

IL_02f7:
	{
		return _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
	}

IL_02fd:
	{
		return _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
	}

IL_0303:
	{
		return _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
	}

IL_0309:
	{
		return _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
	}

IL_030f:
	{
		return _stringLiteral5CAB08554552B91BA981CD02709F3608049743F1;
	}

IL_0315:
	{
		return _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
	}

IL_031b:
	{
		return _stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA;
	}

IL_0321:
	{
		return _stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D;
	}

IL_0327:
	{
		return _stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE;
	}

IL_032d:
	{
		return _stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B;
	}

IL_0333:
	{
		return _stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7;
	}

IL_0339:
	{
		return _stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23;
	}

IL_033f:
	{
		return _stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6;
	}

IL_0345:
	{
		return _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
	}

IL_034b:
	{
		return _stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229;
	}

IL_0351:
	{
		return _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
	}

IL_0357:
	{
		return _stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5;
	}

IL_035d:
	{
		return _stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C;
	}

IL_0363:
	{
		return _stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B;
	}

IL_0369:
	{
		return _stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5;
	}

IL_036f:
	{
		return _stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A;
	}

IL_0375:
	{
		return _stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58;
	}

IL_037b:
	{
		return _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
	}

IL_0381:
	{
		return _stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA;
	}

IL_0387:
	{
		return _stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3;
	}

IL_038d:
	{
		return _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
	}

IL_0393:
	{
		return _stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57;
	}

IL_0399:
	{
		return _stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0;
	}

IL_039f:
	{
		return _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
	}

IL_03a5:
	{
		return _stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B;
	}

IL_03ab:
	{
		return _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
	}

IL_03b1:
	{
		return _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
	}

IL_03b7:
	{
		return _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
	}

IL_03bd:
	{
		return _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
	}

IL_03c3:
	{
		return _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
	}

IL_03c9:
	{
		return _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
	}

IL_03cf:
	{
		return _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
	}

IL_03d5:
	{
		return _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
	}

IL_03db:
	{
		return _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
	}

IL_03e1:
	{
		return _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
	}

IL_03e7:
	{
		return _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
	}

IL_03ed:
	{
		return _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
	}

IL_03f3:
	{
		return _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
	}

IL_03f9:
	{
		return _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
	}

IL_03ff:
	{
		return _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
	}

IL_0405:
	{
		return _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
	}

IL_040b:
	{
		return _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
	}

IL_0411:
	{
		return _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
	}

IL_0417:
	{
		return _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
	}

IL_041d:
	{
		return _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
	}

IL_0423:
	{
		return _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
	}

IL_0429:
	{
		return _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
	}

IL_042f:
	{
		return _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
	}

IL_0435:
	{
		return _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
	}

IL_043b:
	{
		return _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
	}

IL_0441:
	{
		return _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
	}

IL_0447:
	{
		return _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
	}

IL_044d:
	{
		return _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
	}

IL_0453:
	{
		return _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
	}

IL_0459:
	{
		return _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
	}

IL_045f:
	{
		return _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
	}

IL_0465:
	{
		return _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
	}

IL_046b:
	{
		return _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
	}

IL_0471:
	{
		return _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
	}

IL_0477:
	{
		return _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
	}

IL_047d:
	{
		return _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
	}

IL_0483:
	{
		return _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
	}

IL_0489:
	{
		return _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
	}

IL_048f:
	{
		return _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
	}

IL_0495:
	{
		return _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
	}

IL_049b:
	{
		return _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
	}

IL_04a1:
	{
		return _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
	}

IL_04a7:
	{
		return _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
	}

IL_04ad:
	{
		return _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
	}

IL_04b3:
	{
		return _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
	}

IL_04b9:
	{
		return _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
	}

IL_04bf:
	{
		return _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
	}

IL_04c5:
	{
		return _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
	}

IL_04cb:
	{
		return _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
	}

IL_04d1:
	{
		return _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
	}

IL_04d7:
	{
		return _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
	}

IL_04dd:
	{
		return _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
	}

IL_04e3:
	{
		return _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
	}

IL_04e9:
	{
		int32_t L_21 = ___error0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31, L_23, NULL);
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDesignerSerializerAttribute__ctor_m52C401C2E19FF1C4E9A8F140811D5AA762C60602 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, String_t* ___serializerTypeName0, String_t* ___baseSerializerTypeName1, bool ___reloadable2, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___serializerTypeName0;
		__this->___U3CSerializerTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerTypeNameU3Ek__BackingField_1), (void*)L_0);
		String_t* L_1 = ___baseSerializerTypeName1;
		__this->___U3CSerializerBaseTypeNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerBaseTypeNameU3Ek__BackingField_2), (void*)L_1);
		bool L_2 = ___reloadable2;
		__this->___U3CReloadableU3Ek__BackingField_0 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mCA29E5386DACDF19F6F51BC395324F0A8EE05604 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.Specialized.NameValueCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_m878AB94A93A31878089DEF9F110AE6C01BA6D148 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* G_B2_0 = NULL;
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* G_B3_1 = NULL;
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0 = ___col0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1 = ___col0;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = NameObjectCollectionBase_get_Comparer_mEEA4E6897C994C33B4591B953CE6D4FF2F8B95BE_inline(L_1, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61(G_B3_1, G_B3_0, NULL);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_3 = ___col0;
		NameValueCollection_Add_mCBA5E260853B493CE3814EE115B6EE144AD51EBE(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_m986911FA20B1A1784F01C8BE4DC55E9A218F3F00 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_mD5B44E4DD8805C7B53A0BEF4985C398893383271(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_m1545E08D22D8E6C1FCDDAE43741AA43D52F4A21E (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		RuntimeObject* L_1 = ___equalityComparer1;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mAC66C8064A4AAB73914143C4CDF3BF28543BAEC3 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	{
		__this->____all_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____all_18), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->____allKeys_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allKeys_19), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_GetAsOneString_m9572A021DF304441085F4661526BB1289957A193 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = ___list0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, 0);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = ___list0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, 0);
		StringBuilder_t* L_9 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_9;
		V_2 = 1;
		goto IL_0058;
	}

IL_0038:
	{
		StringBuilder_t* L_10 = V_1;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
		StringBuilder_t* L_12 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = ___list0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}

IL_0063:
	{
		return (String_t*)NULL;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetAsStringArray_mEE10A76D84E259EB34CFDB1BA1D41C6E14A26884 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = ___list0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker4< int32_t, RuntimeArray*, int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32) */, L_6, 0, (RuntimeArray*)L_7, 0, L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Add_mCBA5E260853B493CE3814EE115B6EE144AD51EBE (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___c0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0 = ___c0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameValueCollection_Add_mCBA5E260853B493CE3814EE115B6EE144AD51EBE_RuntimeMethod_var)));
	}

IL_000e:
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_2 = ___c0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005d;
	}

IL_001f:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_4 = ___c0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(23 /* System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32) */, L_4, L_5);
		V_2 = L_6;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_7 = ___c0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = VirtualFuncInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t >::Invoke(22 /* System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32) */, L_7, L_8);
		V_3 = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		V_4 = 0;
		goto IL_0048;
	}

IL_0037:
	{
		String_t* L_11 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, __this, L_11, L_15);
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0059;
	}

IL_0051:
	{
		String_t* L_19 = V_2;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, __this, L_19, (String_t*)NULL);
	}

IL_0059:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005d:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Clear_mF42C05323907DA58B571EADD6A0ACB556E7A43B0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameValueCollection_Clear_mF42C05323907DA58B571EADD6A0ACB556E7A43B0_RuntimeMethod_var)));
	}

IL_0013:
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		NameObjectCollectionBase_BaseClear_m52E1AA187776AA0B8ABE5726C23E8FDC893C9ACE(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		bool L_0;
		L_0 = NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7_RuntimeMethod_var)));
	}

IL_0013:
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		String_t* L_2 = ___name0;
		RuntimeObject* L_3;
		L_3 = NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154(__this, L_2, NULL);
		V_0 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_3, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_5, 1, NULL);
		V_0 = L_5;
		String_t* L_6 = ___value1;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		String_t* L_8 = ___value1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_8);
	}

IL_003b:
	{
		String_t* L_10 = ___name0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_11 = V_0;
		NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E(__this, L_10, L_11, NULL);
		return;
	}

IL_0044:
	{
		String_t* L_12 = ___value1;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = V_0;
		String_t* L_14 = ___value1;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
	}

IL_004f:
	{
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_Get_m786B25D45B38D7051C696104946F3F0A2DF78106 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154(__this, L_0, NULL);
		String_t* L_2;
		L_2 = NameValueCollection_GetAsOneString_m9572A021DF304441085F4661526BB1289957A193(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetValues_mC69C8E6E5E62365A35C3A2C99E5DD0C33625362E (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154(__this, L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = NameValueCollection_GetAsStringArray_mEE10A76D84E259EB34CFDB1BA1D41C6E14A26884(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		bool L_0;
		L_0 = NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A_RuntimeMethod_var)));
	}

IL_0013:
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_2, 1, NULL);
		V_0 = L_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = V_0;
		String_t* L_4 = ___value1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_4);
		String_t* L_6 = ___name0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3(__this, L_6, L_7, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Remove_m2146E6474DDFBE19E35E57F777C4FE2625247D56 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		String_t* L_0 = ___name0;
		NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0(__this, L_0, NULL);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___value1;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(19 /* System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String) */, __this, L_0, L_1);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_Get_m2C55CAA38BF0F6677AE8F44C22C289A5B59B4B20 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA(__this, L_0, NULL);
		String_t* L_2;
		L_2 = NameValueCollection_GetAsOneString_m9572A021DF304441085F4661526BB1289957A193(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetValues_mF6E8C52484C1B25D80799EE9630E0AC9EF9B47E0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA(__this, L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = NameValueCollection_GetAsStringArray_mEE10A76D84E259EB34CFDB1BA1D41C6E14A26884(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_GetKey_m80CFEB6D61F9C3B9D03D7B25457D8B122C15170F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_0, NULL);
		return L_1;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_get_AllKeys_mEE8B643F93B5714DD9C231385589020E778AA94D (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____allKeys_19;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = NameObjectCollectionBase_BaseGetAllKeys_m00ADAB2845483DCD590077264B6C11553BBAD744(__this, NULL);
		__this->____allKeys_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allKeys_19), (void*)L_1);
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____allKeys_19;
		return L_2;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mF894B0B49D20CE92F0CE3BBF8ED67F48E61CDB6A (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___dummy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_0 = ___dummy0;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(26 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_get_Count_mC6D18D20EEE559A67C72BD37ECA9C0FB93283F3F (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_System_Collections_IList_get_IsReadOnly_m4558520882327B88C80FE911E956E0F082872DED (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_System_Collections_IList_get_IsFixedSize_m821D69C64C5E4DE6841D4CC95FFC330E63F4D672 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Clear_m2B917BE0CCA6344B1FD65474C53CE512F0476435 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(29 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		return;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(31 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_CopyTo_mCD7A68178A8F87AC0628B2E92CE466A27512CB05 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, (RuntimeArray*)L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(36 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(37 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_RemoveAt_m4D0E6E6AA354A0AFFB76AEB56B4CFF24717BB53A (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(40 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringCollection_get_SyncRoot_mC1F8C1DA3C5ED059D89BD483FB1A4A0A31053F86 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringCollection_System_Collections_IList_get_Item_m749070FBB55E7C9C0C21FE4C1013D154D4635BB2 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_IList_set_Item_m176A74C64AA22AFEA5808E4C81AA3FB46B0F9F5E (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1 = ___value1;
		StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425(__this, L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_System_Collections_IList_Add_m4A71788F0E3068533B66D918B4F29762980052B5 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_System_Collections_IList_Contains_mEB0510524C7FD5886FFF9A0F710CFC04BACAFEF7 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		bool L_1;
		L_1 = StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_System_Collections_IList_IndexOf_mFF76DA01812E585BDD7B25ED4453C22BE0FE9A25 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_IList_Insert_m3B0EB6DA5B02CCA0AB270A329B83152592E6D8B1 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1 = ___value1;
		StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE(__this, L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_IList_Remove_m042058DA970F09FC6A0465F09F3082FB2B71BA45 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_ICollection_CopyTo_m32503816BE4347138894130BD0AD6488643D6AB9 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(33 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringCollection_System_Collections_IEnumerable_GetEnumerator_mF4227CFA7634BA8BFF9F7D25079538A77BD060E1 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection__ctor_m3EF93D74FEC69C5A0CD7A502539B2CEDD8D02954 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0 = ((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17;
		NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* G_B2_0 = NULL;
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___equalityComparer0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		RuntimeObject* L_1 = ___equalityComparer0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2 = ((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->____keyComparer_10 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____keyComparer_10), (void*)G_B3_0);
		NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___equalityComparer1;
		NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61(__this, L_0, NULL);
		int32_t L_1 = ___capacity0;
		NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_mD5B44E4DD8805C7B53A0BEF4985C398893383271 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline(NULL);
		__this->____keyComparer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyComparer_10), (void*)L_0);
		int32_t L_1 = ___capacity0;
		NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___dummy0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		__this->____serializationInfo_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationInfo_14), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* V_3 = NULL;
	int32_t V_4 = 0;
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_5 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		bool L_3 = __this->____readOnly_8;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, L_3, NULL);
		RuntimeObject* L_4 = __this->____keyComparer_10;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_5 = ((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06*)L_5))))
		{
			goto IL_0065;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		RuntimeObject* L_7;
		L_7 = CompatibleComparer_get_DefaultHashCodeProvider_m0DEC6F17BB96B8492250DCC38617890C4417E284(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_6, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, L_7, L_9, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___info0;
		RuntimeObject* L_11;
		L_11 = CompatibleComparer_get_DefaultComparer_m1764CA10BF8362FE4B86743BC5450ACF9F33AC77(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_10, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_11, L_13, NULL);
		goto IL_0107;
	}

IL_0065:
	{
		RuntimeObject* L_14 = __this->____keyComparer_10;
		if (L_14)
		{
			goto IL_009b;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, NULL, L_17, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_18 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_18);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_18, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL, L_20, NULL);
		goto IL_0107;
	}

IL_009b:
	{
		RuntimeObject* L_21 = __this->____keyComparer_10;
		if (!((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E*)IsInstClass((RuntimeObject*)L_21, CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var)))
		{
			goto IL_00ec;
		}
	}
	{
		RuntimeObject* L_22 = __this->____keyComparer_10;
		V_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E*)CastclassClass((RuntimeObject*)L_22, CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_23 = ___info0;
		CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* L_24 = V_3;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4_inline(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_23);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_23, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, L_25, L_27, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_28 = ___info0;
		CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* L_29 = V_3;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9_inline(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		NullCheck(L_28);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_28, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_30, L_32, NULL);
		goto IL_0107;
	}

IL_00ec:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_33 = ___info0;
		RuntimeObject* L_34 = __this->____keyComparer_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_33);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_33, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_34, L_36, NULL);
	}

IL_0107:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_37 = __this->____entriesArray_9;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
		V_0 = L_38;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_39 = ___info0;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_39, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, L_40, NULL);
		int32_t L_41 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_1 = L_42;
		int32_t L_43 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_2 = L_44;
		V_4 = 0;
		goto IL_0162;
	}

IL_0132:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_45 = __this->____entriesArray_9;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		RuntimeObject* L_47;
		L_47 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_45, L_46);
		V_5 = ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_47, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_1;
		int32_t L_49 = V_4;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_50 = V_5;
		NullCheck(L_50);
		String_t* L_51 = L_50->___Key_0;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (String_t*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = V_2;
		int32_t L_53 = V_4;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_54 = V_5;
		NullCheck(L_54);
		RuntimeObject* L_55 = L_54->___Value_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (RuntimeObject*)L_55);
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0162:
	{
		int32_t L_57 = V_4;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0132;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_59 = ___info0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		NullCheck(L_59);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_59, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, (RuntimeObject*)L_60, L_62, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_63 = ___info0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		NullCheck(L_63);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_63, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, (RuntimeObject*)L_64, L_66, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_67 = ___info0;
		int32_t L_68 = __this->____version_15;
		NullCheck(L_67);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_67, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_68, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_9 = NULL;
	String_t* V_10 = NULL;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		RuntimeObject* L_0 = __this->____keyComparer_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____serializationInfo_14;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_2 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var)));
	}

IL_0017:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____serializationInfo_14;
		V_0 = L_3;
		__this->____serializationInfo_14 = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationInfo_14), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		V_1 = (bool)0;
		V_2 = 0;
		V_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		V_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		V_5 = (RuntimeObject*)NULL;
		V_6 = (RuntimeObject*)NULL;
		V_7 = (bool)0;
		V_8 = 0;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = V_0;
		NullCheck(L_4);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_5;
		L_5 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_4, NULL);
		V_9 = L_5;
		goto IL_025a;
	}

IL_0047:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_6 = V_9;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734(L_6, NULL);
		V_10 = L_7;
		String_t* L_8 = V_10;
		uint32_t L_9;
		L_9 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F(L_8, NULL);
		V_11 = L_9;
		uint32_t L_10 = V_11;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1573770551)))))
		{
			goto IL_00a2;
		}
	}
	{
		uint32_t L_11 = V_11;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1202781175)))))
		{
			goto IL_0085;
		}
	}
	{
		uint32_t L_12 = V_11;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)891156946))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_13 = V_11;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1202781175))))
		{
			goto IL_00df;
		}
	}
	{
		goto IL_025a;
	}

IL_0085:
	{
		uint32_t L_14 = V_11;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1228509323))))
		{
			goto IL_0121;
		}
	}
	{
		uint32_t L_15 = V_11;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1573770551))))
		{
			goto IL_0179;
		}
	}
	{
		goto IL_025a;
	}

IL_00a2:
	{
		uint32_t L_16 = V_11;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1944240600)))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_17 = V_11;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1613443821))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_18 = V_11;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1944240600))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_025a;
	}

IL_00c5:
	{
		uint32_t L_19 = V_11;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1924324773))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_20 = V_11;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-504907628))))
		{
			goto IL_0137;
		}
	}
	{
		goto IL_025a;
	}

IL_00df:
	{
		String_t* L_21 = V_10;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		if (L_22)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_025a;
	}

IL_00f5:
	{
		String_t* L_23 = V_10;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_025a;
	}

IL_010b:
	{
		String_t* L_25 = V_10;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL);
		if (L_26)
		{
			goto IL_01c1;
		}
	}
	{
		goto IL_025a;
	}

IL_0121:
	{
		String_t* L_27 = V_10;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_025a;
	}

IL_0137:
	{
		String_t* L_29 = V_10;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		if (L_30)
		{
			goto IL_0201;
		}
	}
	{
		goto IL_025a;
	}

IL_014d:
	{
		String_t* L_31 = V_10;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, NULL);
		if (L_32)
		{
			goto IL_020f;
		}
	}
	{
		goto IL_025a;
	}

IL_0163:
	{
		String_t* L_33 = V_10;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, NULL);
		if (L_34)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_025a;
	}

IL_0179:
	{
		String_t* L_35 = V_10;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		if (L_36)
		{
			goto IL_024a;
		}
	}
	{
		goto IL_025a;
	}

IL_018f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_37 = V_0;
		NullCheck(L_37);
		bool L_38;
		L_38 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_37, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		V_1 = L_38;
		goto IL_025a;
	}

IL_01a0:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_39 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		NullCheck(L_39);
		RuntimeObject* L_42;
		L_42 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_39, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, L_41, NULL);
		V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_01c1:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_43 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		RuntimeObject* L_46;
		L_46 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_43, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_45, NULL);
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_46, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_01df:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_47, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_49, NULL);
		__this->____keyComparer_10 = ((RuntimeObject*)Castclass((RuntimeObject*)L_50, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyComparer_10), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_50, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		goto IL_025a;
	}

IL_0201:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_51, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		V_2 = L_52;
		goto IL_025a;
	}

IL_020f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		NullCheck(L_53);
		RuntimeObject* L_56;
		L_56 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_53, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, L_55, NULL);
		V_3 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_56, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_022c:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_57 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		NullCheck(L_57);
		RuntimeObject* L_60;
		L_60 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_57, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, L_59, NULL);
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_60, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_024a:
	{
		V_7 = (bool)1;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_61, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_8 = L_62;
	}

IL_025a:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_63 = V_9;
		NullCheck(L_63);
		bool L_64;
		L_64 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_63, NULL);
		if (L_64)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_65 = __this->____keyComparer_10;
		if (L_65)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject* L_66 = V_6;
		if (!L_66)
		{
			goto IL_0276;
		}
	}
	{
		RuntimeObject* L_67 = V_5;
		if (L_67)
		{
			goto IL_027c;
		}
	}

IL_0276:
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_68 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_68);
		SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093(L_68, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var)));
	}

IL_027c:
	{
		RuntimeObject* L_69 = V_6;
		RuntimeObject* L_70 = V_5;
		CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* L_71 = (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E*)il2cpp_codegen_object_new(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7(L_71, L_69, L_70, NULL);
		__this->____keyComparer_10 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyComparer_10), (void*)L_71);
	}

IL_028b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_3;
		if (!L_72)
		{
			goto IL_0292;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = V_4;
		if (L_73)
		{
			goto IL_0298;
		}
	}

IL_0292:
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_74 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_74);
		SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093(L_74, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var)));
	}

IL_0298:
	{
		int32_t L_75 = V_2;
		NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3(__this, L_75, NULL);
		V_12 = 0;
		goto IL_02b9;
	}

IL_02a4:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = V_3;
		int32_t L_77 = V_12;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		String_t* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = V_4;
		int32_t L_81 = V_12;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E(__this, L_79, L_83, NULL);
		int32_t L_84 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_02b9:
	{
		int32_t L_85 = V_12;
		int32_t L_86 = V_2;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_02a4;
		}
	}
	{
		bool L_87 = V_1;
		__this->____readOnly_8 = L_87;
		bool L_88 = V_7;
		if (!L_88)
		{
			goto IL_02d1;
		}
	}
	{
		int32_t L_89 = V_8;
		__this->____version_15 = L_89;
	}

IL_02d1:
	{
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____entriesArray_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesArray_9), (void*)L_0);
		RuntimeObject* L_1 = __this->____keyComparer_10;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____entriesTable_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesTable_11), (void*)L_2);
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL);
		int32_t L_3 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_1, L_0, NULL);
		__this->____entriesArray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesArray_9), (void*)L_1);
		int32_t L_2 = ___capacity0;
		RuntimeObject* L_3 = __this->____keyComparer_10;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_4, L_2, L_3, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____entriesTable_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesTable_11), (void*)L_4);
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL);
		int32_t L_5 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_2);
		return ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_3, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var));
	}

IL_0017:
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_4 = __this->____nullKeyEntry_12;
		il2cpp_codegen_memory_barrier();
		return L_4;
	}
}
// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_get_Comparer_mEEA4E6897C994C33B4591B953CE6D4FF2F8B95BE (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____keyComparer_10;
		return L_0;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_8;
		return L_0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_0 = NULL;
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___name0;
		RuntimeObject* L_4 = ___value1;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_5 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)il2cpp_codegen_object_new(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = ___name0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_11 = ___name0;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_12 = V_0;
		NullCheck(L_10);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_10, L_11, L_12);
		goto IL_0057;
	}

IL_0044:
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_13 = __this->____nullKeyEntry_12;
		il2cpp_codegen_memory_barrier();
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_14 = V_0;
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)L_14);
	}

IL_0057:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_15 = __this->____entriesArray_9;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_16);
		int32_t L_18 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___name0;
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(26 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_4, L_5);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->____entriesArray_9;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_005e;
	}

IL_0039:
	{
		RuntimeObject* L_8 = __this->____keyComparer_10;
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		String_t* L_11;
		L_11 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_10, NULL);
		NullCheck(L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_9, L_11);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = __this->____entriesArray_9;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker1< int32_t >::Invoke(40 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_13, L_14);
	}

IL_005a:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_005e:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_009a;
	}

IL_0064:
	{
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_17 = __this->____entriesArray_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_0096;
	}

IL_007d:
	{
		int32_t L_19 = V_1;
		String_t* L_20;
		L_20 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_19, NULL);
		if (L_20)
		{
			goto IL_0092;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = __this->____entriesArray_9;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		VirtualActionInvoker1< int32_t >::Invoke(40 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_21, L_22);
	}

IL_0092:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}

IL_009a:
	{
		int32_t L_25 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseClear_m52E1AA187776AA0B8ABE5726C23E8FDC893C9ACE (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseClear_m52E1AA187776AA0B8ABE5726C23E8FDC893C9ACE_RuntimeMethod_var)));
	}

IL_0018:
	{
		NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC(__this, NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_1;
		L_1 = NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F(__this, L_0, NULL);
		V_0 = L_1;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_2 = V_0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return NULL;
	}

IL_000d:
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___Value_1;
		return L_4;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_0 = NULL;
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___name0;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_4;
		L_4 = NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F(__this, L_3, NULL);
		V_0 = L_4;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_6 = V_0;
		RuntimeObject* L_7 = ___value1;
		NullCheck(L_6);
		L_6->___Value_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Value_1), (void*)L_7);
		int32_t L_8 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0039:
	{
		String_t* L_9 = ___name0;
		RuntimeObject* L_10 = ___value1;
		NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E(__this, L_9, L_10, NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3 = ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var))->___Value_1;
		return L_3;
	}
}
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var)));
		String_t* L_3 = ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var))->___Key_0;
		return L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_GetEnumerator_mDEEC7FF01AEF8FB0739964513BAF10C4C3F254BC (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* L_0 = (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0*)il2cpp_codegen_object_new(NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NameObjectCollectionBase_get_Count_m766C6702F64CD224AB123566BAACB2A81FCBF5F0 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___index1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___index1), L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A)), L_8, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_0055:
	{
		RuntimeArray* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_13, NULL);
		int32_t L_15 = ___index1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = __this->____entriesArray_9;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_18;
		L_18 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_007a:
	{
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, __this);
		V_0 = L_20;
		goto IL_0095;
	}

IL_0083:
	{
		RuntimeArray* L_21 = ___array0;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
		int32_t L_24 = ___index1;
		int32_t L_25 = L_24;
		___index1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_21);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_21, L_23, L_25, NULL);
	}

IL_0095:
	{
		RuntimeObject* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0083;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mAC6E9FEF3C7C442481772E568C4FBF552B908624 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_16;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_16);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_16;
		return L_4;
	}
}
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameObjectCollectionBase_BaseGetAllKeys_m00ADAB2845483DCD590077264B6C11553BBAD744 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0025;
	}

IL_0017:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_2;
		String_t* L_7;
		L_7 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_6, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_7);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		return L_11;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* NameObjectCollectionBase_get_Keys_m58FAE9F8B8ACD77316E5019E3EFFA0862BD5006D (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* L_0 = __this->____keys_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* L_1 = (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81*)il2cpp_codegen_object_new(KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		KeysCollection__ctor_m1C4BBB21102A9153DD07811B62900528EFB2E286(L_1, __this, NULL);
		__this->____keys_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_13), (void*)L_1);
	}

IL_0014:
	{
		KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* L_2 = __this->____keys_13;
		return L_2;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__cctor_m9D96ED9D8FAA7D5C0F233E940EA3FEA3FACBCA5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline(NULL);
		((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513 (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___Key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Key_0), (void*)L_0);
		RuntimeObject* L_1 = ___value1;
		__this->___Value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___coll0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = ___coll0;
		__this->____coll_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coll_1), (void*)L_0);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		__this->____version_2 = L_2;
		__this->____pos_0 = (-1);
		return;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_5 = __this->____pos_0;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_6 = __this->____coll_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_6);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_8 = __this->____pos_0;
		__this->____pos_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return (bool)1;
	}

IL_0048:
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_9 = __this->____coll_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_9);
		__this->____pos_0 = L_10;
		return (bool)0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5_RuntimeMethod_var)));
	}

IL_0023:
	{
		__this->____pos_0 = (-1);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = __this->____pos_0;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_2 = __this->____coll_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_4 = __this->____coll_1;
		int32_t L_5 = __this->____pos_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(L_4, L_5, NULL);
		return L_6;
	}

IL_002e:
	{
		String_t* L_7;
		L_7 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection__ctor_m1C4BBB21102A9153DD07811B62900528EFB2E286 (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___coll0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = ___coll0;
		__this->____coll_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coll_0), (void*)L_0);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* L_1 = (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0*)il2cpp_codegen_object_new(NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeysCollection_get_Count_mFCE07990FBE528B3E7E2A61DFB98CDD5C4499845 (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___index1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___index1), L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A)), L_8, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_0055:
	{
		RuntimeArray* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_13, NULL);
		int32_t L_15 = ___index1;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_16 = __this->____coll_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_18;
		L_18 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_007a:
	{
		RuntimeObject* L_20;
		L_20 = KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB(__this, NULL);
		V_0 = L_20;
		goto IL_0095;
	}

IL_0083:
	{
		RuntimeArray* L_21 = ___array0;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
		int32_t L_24 = ___index1;
		int32_t L_25 = L_24;
		___index1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_21);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_21, L_23, L_25, NULL);
	}

IL_0095:
	{
		RuntimeObject* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0083;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_System_Collections_ICollection_get_SyncRoot_m37BE37DA43215029140183C22A297186DAE6B44C (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___comparer0, RuntimeObject* ___hashCodeProvider1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___comparer0;
		__this->____comparer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_0), (void*)L_0);
		RuntimeObject* L_1 = ___hashCodeProvider1;
		__this->____hcp_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hcp_2), (void*)L_1);
		return;
	}
}
// System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompatibleComparer_Equals_m09CF7F036688C2E00C8BF5618C0528BA8D8C40D5 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_4 = __this->____comparer_0;
			if (!L_4)
			{
				goto IL_002a_1;
			}
		}
		{
			RuntimeObject* L_5 = __this->____comparer_0;
			RuntimeObject* L_6 = ___a0;
			RuntimeObject* L_7 = ___b1;
			NullCheck(L_5);
			int32_t L_8;
			L_8 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_5, L_6, L_7);
			V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
			goto IL_0050;
		}

IL_002a_1:
		{
			RuntimeObject* L_9 = ___a0;
			V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0041_1;
			}
		}
		{
			RuntimeObject* L_11 = V_0;
			RuntimeObject* L_12 = ___b1;
			NullCheck(L_11);
			int32_t L_13;
			L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_11, L_12);
			V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
			goto IL_0050;
		}

IL_0041_1:
		{
			goto IL_0048;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.ArgumentException)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	}// end catch (depth: 1)

IL_0048:
	{
		RuntimeObject* L_14 = ___a0;
		RuntimeObject* L_15 = ___b1;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_15);
		return L_16;
	}

IL_0050:
	{
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____hcp_2;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->____hcp_2;
		RuntimeObject* L_4 = ___obj0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IHashCodeProvider::GetHashCode(System.Object) */, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}

IL_0023:
	{
		RuntimeObject* L_6 = ___obj0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		return L_7;
	}
}
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_0;
		return L_0;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_2;
		return L_0;
	}
}
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultComparer_m1764CA10BF8362FE4B86743BC5450ACF9F33AC77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* L_2 = (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281*)il2cpp_codegen_object_new(CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CaseInsensitiveComparer__ctor_mCB4043516ED08874EE7AA38C56A3C3E016F4DA1E(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1), (void*)L_2);
	}

IL_001a:
	{
		RuntimeObject* L_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1;
		il2cpp_codegen_memory_barrier();
		return L_3;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultHashCodeProvider_m0DEC6F17BB96B8492250DCC38617890C4417E284 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F* L_2 = (CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F*)il2cpp_codegen_object_new(CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CaseInsensitiveHashCodeProvider__ctor_mE5326CFE4A3269CC813CCF1ADF2E57529E902C4B(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3), (void*)L_2);
	}

IL_001a:
	{
		RuntimeObject* L_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3;
		il2cpp_codegen_memory_barrier();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m5AB47C67F3FEDA648AF76B21B7CAB12FDB793B69 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, L_2, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___compressedStream0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59BD369CF985844B111CA4447943A285D359441C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___mode1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___mode1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___compressedStream0;
		__this->___base_stream_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_5), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___compressedStream0;
		int32_t L_7 = ___mode1;
		bool L_8 = ___gzip3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_9;
		L_9 = DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6(L_6, L_7, L_8, NULL);
		__this->___native_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___native_9), (void*)L_9);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_10 = __this->___native_9;
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_12 = ___mode1;
		__this->___mode_6 = L_12;
		bool L_13 = ___leaveOpen2;
		__this->___leaveOpen_7 = L_13;
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finalize_mAFF7BCEF197A6549D13572A0AFD326CD995EA7AC (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(15 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B4_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_0 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
	}

IL_0009:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = __this->___native_9;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		bool L_3 = ___disposing0;
		NullCheck(G_B4_0);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(G_B4_0, L_3, NULL);
	}

IL_001b:
	{
		bool L_4 = ___disposing0;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->___disposed_8;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___disposed_8 = (bool)1;
		bool L_6 = __this->___leaveOpen_7;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___base_stream_5;
		V_0 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_9);
	}

IL_0045:
	{
		__this->___base_stream_5 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_5), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_004c:
	{
		bool L_10 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_10, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_9;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0027:
	{
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		NullCheck(L_8);
		V_0 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		int32_t L_9 = ___offset1;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = ___count2;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}

IL_0046:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0051:
	{
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_15 = ___offset1;
		int32_t L_16 = ___count2;
		int32_t L_17 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16))) <= ((int32_t)L_17)))
		{
			goto IL_0071;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53549F14C4C0C01E846937308C01413567514ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___array0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___count2;
		int32_t L_22;
		L_22 = DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C(__this, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001c;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001c:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_9;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18(L_7, L_8, L_9, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___offset1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0045:
	{
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_12 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14 = ___count2;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)))))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___array0;
		int32_t L_17 = ___offset1;
		int32_t L_18 = ___count2;
		DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845(__this, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_5 = __this->___native_9;
		NullCheck(L_5);
		DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F(L_5, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___offset1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___count2;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0075:
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_16 = (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)il2cpp_codegen_object_new(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396(L_16, __this, (intptr_t)((void*)DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___asyncCallback3;
		RuntimeObject* L_21 = ___asyncState4;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___offset1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___count2;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0075:
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_16 = (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)il2cpp_codegen_object_new(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A(L_16, __this, (intptr_t)((void*)DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___asyncCallback3;
		RuntimeObject* L_21 = ___asyncState4;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B6_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_6 = ((ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)IsInstSealed((RuntimeObject*)L_5, ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(G_B6_0);
		int32_t L_9;
		L_9 = ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7(G_B6_0, L_8, NULL);
		return L_9;
	}
}
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B6_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_6 = ((WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)IsInstSealed((RuntimeObject*)L_5, WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(G_B6_0);
		WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C(G_B6_0, L_8, NULL);
		return;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3_RuntimeMethod_var)));
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___mode_6;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->___mode_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* currentDelegate = reinterpret_cast<ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* currentDelegate = reinterpret_cast<WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast;
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B2_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B1_0 = NULL;
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* G_B3_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_1 = NULL;
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_0 = (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)il2cpp_codegen_object_new(DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E(L_0, NULL);
		V_0 = L_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = V_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_2, NULL);
		NullCheck(L_1);
		L_1->___data_3 = L_3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_0;
		int32_t L_5 = ___mode1;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0025;
		}
	}
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_6 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_6, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0025:
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_7 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_7, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___feeder_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___feeder_0), (void*)G_B3_0);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_8 = V_0;
		int32_t L_9 = ___mode1;
		bool L_10 = ___gzip2;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_11 = V_0;
		NullCheck(L_11);
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_12 = L_11->___feeder_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_13 = V_0;
		NullCheck(L_13);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = L_13->___data_3;
		intptr_t L_15;
		L_15 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_14, NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_16;
		L_16 = DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01(L_9, L_10, L_12, L_15, NULL);
		NullCheck(L_8);
		L_8->___z_stream_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___z_stream_2), (void*)L_16);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_17 = V_0;
		NullCheck(L_17);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_18 = L_17->___z_stream_2;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_20 = V_0;
		NullCheck(L_20);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(L_20, (bool)1, NULL);
		return (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)NULL;
	}

IL_006a:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_21 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___compressedStream0;
		NullCheck(L_21);
		L_21->___base_stream_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___base_stream_1), (void*)L_22);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_23 = V_0;
		return L_23;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->___disposed_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->___disposed_4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		goto IL_0025;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		__this->___base_stream_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_1), (void*)L_2);
	}

IL_0025:
	{
		__this->___io_buffer_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_3 = __this->___z_stream_2;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_4 = __this->___z_stream_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_6 = __this->___z_stream_2;
		NullCheck(L_6);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_6, NULL);
	}

IL_004c:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = __this->___data_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (&__this->___data_3);
		bool L_9;
		L_9 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___data_3);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		int32_t L_1;
		L_1 = DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_2, _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F, NULL);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___buffer0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_0 = L_4;
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_1 = L_8;
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_9 = V_2;
		__this->___last_error_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_9);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_004a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___io_buffer_5;
		intptr_t L_12 = ___buffer0;
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, 0, L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_005e:
	{
		int32_t L_15 = V_3;
		return L_15;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___buffer0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_001c:
	{
		int32_t L_2 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		intptr_t L_5 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_5, L_6, 0, L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___io_buffer_5;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_11 = V_2;
		__this->___last_error_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_11);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007a;
	}// end catch (depth: 1)

IL_005b:
	{
		void* L_12;
		L_12 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___buffer0), NULL);
		int32_t L_13 = V_1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&___buffer0), ((void*)il2cpp_codegen_add((intptr_t)L_12, L_13)), NULL);
		int32_t L_14 = ___length1;
		int32_t L_15 = V_1;
		___length1 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
	}

IL_0074:
	{
		int32_t L_18 = ___length1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_007a:
	{
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___result0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		Exception_t** L_1 = (&__this->___last_error_6);
		Exception_t* L_2;
		L_2 = InterlockedExchangeImpl<Exception_t*>(L_1, (Exception_t*)NULL);
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_5 = ___result0;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)-11))))
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_008e;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_0076;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_0066;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0056;
			}
			case 10:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_004e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
		goto IL_0094;
	}

IL_0056:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163));
		goto IL_0094;
	}

IL_005e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB));
		goto IL_0094;
	}

IL_0066:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41));
		goto IL_0094;
	}

IL_006e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D));
		goto IL_0094;
	}

IL_0076:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D));
		goto IL_0094;
	}

IL_007e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408));
		goto IL_0094;
	}

IL_0086:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548));
		goto IL_0094;
	}

IL_008e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
	}

IL_0094:
	{
		String_t* L_6 = V_1;
		String_t* L_7 = ___where1;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_7, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}
}
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (int32_t, int32_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___feeder2' to native representation
	Il2CppMethodPointer ____feeder2_marshaled = NULL;
	____feeder2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___feeder2));

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateZStream)(___compress0, static_cast<int32_t>(___gzip1), ____feeder2_marshaled, ___data3);

	// Marshaling of return value back from native representation
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* _returnValue_unmarshaled = (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8*)il2cpp_codegen_object_new(SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
	SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseZStream)(___stream0);

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Flush)(____stream0_marshaled);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WriteZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* currentDelegate = reinterpret_cast<UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenInst(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buffer0, ___length1, ___data2);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buffer0, ___length1, ___data2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buffer0, ___length1, ___data2);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A(L_0, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___parentElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___parent0, RuntimeObject* ___configContext1, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___section2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___completed_synchronously_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) 
{
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_0 = __this->___async_callback_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___completed_synchronously_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ar0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MobileAuthenticatedStream_get_TargetHost_m572DA701CB3CE3FA4006D5745F9A3B9A52739CAB_inline (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___value0, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = ___value0;
		__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = __this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___value0, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = ___value0;
		__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = __this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____InnerStream_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_inline (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBrowsableU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCategoryU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVisibilityU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_get_Comparer_mEEA4E6897C994C33B4591B953CE6D4FF2F8B95BE_inline (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____keyComparer_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_invariantCultureIgnoreCase_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
