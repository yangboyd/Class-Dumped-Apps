//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGDirectRealtimeMessageOperation : NSObject
{
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSString *_messageKey;
    NSString *_message;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *messageKey; // @synthesize messageKey=_messageKey;
@property(readonly, copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
- (id)initWithMessageKey:(id)arg1 message:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

@end

