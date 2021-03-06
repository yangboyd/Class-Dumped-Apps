//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSService.h>

@class AWSNetworking, AWSServiceConfiguration;

@interface AWSIoTData : AWSService
{
    AWSServiceConfiguration *_configuration;
    AWSNetworking *_networking;
}

+ (void)removeIoTDataForKey:(id)arg1;
+ (id)IoTDataForKey:(id)arg1;
+ (void)registerIoTDataWithConfiguration:(id)arg1 forKey:(id)arg2;
+ (id)defaultIoTData;
+ (void)initialize;
@property(retain, nonatomic) AWSNetworking *networking; // @synthesize networking=_networking;
@property(retain, nonatomic) AWSServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)updateThingShadow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)updateThingShadow:(id)arg1;
- (void)publish:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)publish:(id)arg1;
- (void)getThingShadow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getThingShadow:(id)arg1;
- (void)deleteThingShadow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)deleteThingShadow:(id)arg1;
- (id)invokeRequest:(id)arg1 HTTPMethod:(long long)arg2 URLString:(id)arg3 targetPrefix:(id)arg4 operationName:(id)arg5 outputClass:(Class)arg6;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

