//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SNZLarynxServiceClient : NSObject
{
}

+ (id)sharedClient;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1 isSuccessful:(_Bool)arg2 responseDictionary:(id)arg3;
- (void)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendServerActionContext:(id)arg1 appContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

