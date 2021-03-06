//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface XMPPUnifiedSyncConfiguration : NSObject
{
    NSMutableDictionary *_protocolParams;
    _Bool _syncBusiness;
    _Bool _syncContacts;
    _Bool _syncDevices;
    _Bool _syncPayments;
    _Bool _syncSidelist;
    _Bool _syncStatus;
    unsigned long long _mode;
    unsigned long long _context;
    NSString *_sid;
    unsigned long long _batchSize;
    double _timeout;
    CDUnknownBlockType _completionHandler;
    NSArray *_listRequests;
    NSArray *_sidelistRequests;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sidelistRequests; // @synthesize sidelistRequests=_sidelistRequests;
@property(copy, nonatomic) NSArray *listRequests; // @synthesize listRequests=_listRequests;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(readonly, nonatomic) _Bool syncStatus; // @synthesize syncStatus=_syncStatus;
@property(readonly, nonatomic) _Bool syncSidelist; // @synthesize syncSidelist=_syncSidelist;
@property(readonly, nonatomic) _Bool syncPayments; // @synthesize syncPayments=_syncPayments;
@property(readonly, nonatomic) _Bool syncDevices; // @synthesize syncDevices=_syncDevices;
@property(readonly, nonatomic) _Bool syncContacts; // @synthesize syncContacts=_syncContacts;
@property(readonly, nonatomic) _Bool syncBusiness; // @synthesize syncBusiness=_syncBusiness;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSDictionary *protocolParams;
- (void)enableStatusSync;
- (void)enableSidelistSync;
- (void)enablePaymentsSync;
- (void)enableDevicesSync;
- (void)enableContactSync;
- (void)enableBusinessSync;
- (id)initWithMode:(unsigned long long)arg1 context:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

