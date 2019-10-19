//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, RLMRealmConfiguration, RLMSchema;

@interface RLMRealm : NSObject
{
    shared_ptr_130f66cc _realm;
    struct RLMSchemaInfo _info;
    NSHashTable *_collectionEnumerators;
    _Bool _sendingNotifications;
    _Bool _dynamic;
    RLMSchema *_schema;
    NSHashTable *_notificationHandlers;
}

+ (_Bool)performMigrationForConfiguration:(id)arg1 error:(id *)arg2;
+ (id)migrateRealm:(id)arg1;
+ (unsigned long long)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
+ (void)resetRealmState;
+ (id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id *)arg2;
+ (id)realmWithConfiguration:(id)arg1 error:(id *)arg2;
+ (id)realmWithSharedRealm:(shared_ptr_130f66cc)arg1 schema:(id)arg2;
+ (void)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)realmWithURL:(id)arg1;
+ (id)defaultRealm;
+ (void)initialize;
+ (_Bool)isCoreDebug;
@property(readonly, nonatomic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(retain, nonatomic) NSHashTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(retain, nonatomic) RLMSchema *schema; // @synthesize schema=_schema;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)detachAllEnumerators;
- (void)unregisterEnumerator:(id)arg1;
- (void)registerEnumerator:(id)arg1;
- (_Bool)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2;
- (id)objects:(id)arg1 withPredicate:(id)arg2;
- (id)objects:(id)arg1 where:(id)arg2 args:(char *)arg3;
- (id)objects:(id)arg1 where:(id)arg2;
- (id)allObjects:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjects:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)addOrUpdateObjectsFromArray:(id)arg1;
- (void)addOrUpdateObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)refresh;
- (void)dealloc;
- (_Bool)compact;
- (id)resolveThreadSafeReference:(id)arg1;
- (void)invalidate;
- (void)cancelWriteTransaction;
- (_Bool)transactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id *)arg2;
- (_Bool)commitWriteTransaction:(id *)arg1;
- (void)commitWriteTransaction;
- (void)beginWriteTransaction;
@property(readonly, nonatomic) RLMRealmConfiguration *configuration;
- (void)sendNotifications:(id)arg1;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (void)verifyNotificationsAreSupported;
@property(nonatomic) _Bool autorefresh;
// Error parsing type for property group:
// Property attributes: T^{Group=^^?{SlabAlloc=^^?Q^{Replication}iQ{atomic<unsigned long long>=AQ}{shared_ptr<realm::SlabAlloc::MappedFile>=^{MappedFile}^{__shared_weak_count}}{unique_ptr<std::__1::shared_ptr<const realm::util::File::Map<char> > [], std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char> > []> >={__compressed_pair<std::__1::shared_ptr<const realm::util::File::Map<char> > *, std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char> > []> >=^{shared_ptr<const realm::util::File::Map<char> >}}}Q*QQi{unique_ptr<unsigned long [], std::__1::default_delete<unsigned long []> >={__compressed_pair<unsigned long *, std::__1::default_delete<unsigned long []> >=^Q}}QiBi{vector<realm::SlabAlloc::Slab, std::__1::allocator<realm::SlabAlloc::Slab> >=^{Slab}^{Slab}{__compressed_pair<realm::SlabAlloc::Slab *, std::__1::allocator<realm::SlabAlloc::Slab> >=^{Slab}}}{vector<realm::SlabAlloc::Chunk, std::__1::allocator<realm::SlabAlloc::Chunk> >=^{Chunk}^{Chunk}{__compressed_pair<realm::SlabAlloc::Chunk *, std::__1::allocator<realm::SlabAlloc::Chunk> >=^{Chunk}}}{vector<realm::SlabAlloc::Chunk, std::__1::allocator<realm::SlabAlloc::Chunk> >=^{Chunk}^{Chunk}{__compressed_pair<realm::SlabAlloc::Chunk *, std::__1::allocator<realm::SlabAlloc::Chunk> >=^{Chunk}}}B[256{hash_entry=Q*Q}]Q}{Array=^^?^{VTable}*qqQQ^{Allocator}Q^{ArrayParent}QCBBB}{ArrayInteger=^^?^{VTable}*qqQQ^{Allocator}Q^{ArrayParent}QCBBB}{ArrayString=^^?^{VTable}*qqQQ^{Allocator}Q^{ArrayParent}QCBBBB}{vector<realm::Table *, std::__1::allocator<realm::Table *> >=^^{Table}^^{Table}{__compressed_pair<realm::Table **, std::__1::allocator<realm::Table *> >=^^{Table}}}BB{function<void (const realm::Group::CascadeNotification &)>={type=[24C]}^{__base<void (const realm::Group::CascadeNotification &)>}}{function<void ()>={type=[24C]}^{__base<void ()>}}},R,N

@property(readonly, nonatomic) _Bool inWriteTransaction;
- (void)verifyThread;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initPrivate;

@end

