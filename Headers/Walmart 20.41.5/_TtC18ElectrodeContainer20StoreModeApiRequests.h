//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/_TtC18ElectrodeContainer23StoreModeApiAPIRequests.h>

@interface _TtC18ElectrodeContainer20StoreModeApiRequests : _TtC18ElectrodeContainer23StoreModeApiAPIRequests
{
}

- (id)init;
- (void)getStoreIdWithResponseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStoreDataWithResponseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSensorWithResponseCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)unregisterIsInStoreRequestHandlerWithUuid:(id)arg1;
- (CDUnknownBlockType)unregisterGetStoreIdRequestHandlerWithUuid:(id)arg1;
- (CDUnknownBlockType)unregisterGetStoreDataRequestHandlerWithUuid:(id)arg1;
- (CDUnknownBlockType)unregisterGetSensorRequestHandlerWithUuid:(id)arg1;
- (id)registerIsInStoreRequestHandlerWithHandler:(CDUnknownBlockType)arg1;
- (id)registerGetStoreIdRequestHandlerWithHandler:(CDUnknownBlockType)arg1;
- (id)registerGetStoreDataRequestHandlerWithHandler:(CDUnknownBlockType)arg1;
- (id)registerGetSensorRequestHandlerWithHandler:(CDUnknownBlockType)arg1;

@end

