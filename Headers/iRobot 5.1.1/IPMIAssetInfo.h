//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPMIAssetInfo : NSObject
{
    struct Handle<std::__1::shared_ptr<core::PMIAssetInfo>, std::__1::shared_ptr<core::PMIAssetInfo>> _cppRefHandle;
}

+ (id)createFromJson:(id)arg1;
+ (id)create:(id)arg1 sku:(id)arg2 swVersion:(id)arg3 name:(id)arg4 protocolType:(id)arg5 capabilityJson:(id)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getCapabilityJson;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSku:(id)arg1;
- (void)setName:(id)arg1;
- (_Bool)equals:(id)arg1;
- (id)getVirtualRobotConfig;
- (_Bool)getIsVirtual;
- (id)getProtocolType;
- (id)getName;
- (id)getSoftwareVersion;
- (id)getSku;
- (id)getAssetId;
- (id)asJson;
- (const shared_ptr_f1a4b7b6 *)cppRef;
- (id)initWithCpp:(const shared_ptr_f1a4b7b6 *)arg1;

@end

