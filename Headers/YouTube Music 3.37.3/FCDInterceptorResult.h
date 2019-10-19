//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCDRPCContext, FCDRPCResponse;
@protocol NSCopying><NSObject;

@interface FCDInterceptorResult : NSObject
{
    FCDRPCContext *_context;
    FCDRPCResponse *_response;
    id <NSCopying><NSObject> _requestMessage;
}

+ (id)resultWithRequestMessage:(id)arg1;
+ (id)resultWithError:(id)arg1;
+ (id)resultWithResponse:(id)arg1;
+ (id)resultWithContext:(id)arg1;
@property(readonly, nonatomic) id <NSCopying><NSObject> requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly, nonatomic) FCDRPCResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) FCDRPCContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 response:(id)arg2 requestMessage:(id)arg3;

@end

