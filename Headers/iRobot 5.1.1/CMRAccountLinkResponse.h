//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRAccountLinkResponse : NSObject
{
    _Bool _isInitialized;
    _Bool _isSuccessful;
    NSString *_content;
}

+ (id)AccountLinkResponseWithIsInitialized:(_Bool)arg1 isSuccessful:(_Bool)arg2 content:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) _Bool isSuccessful; // @synthesize isSuccessful=_isSuccessful;
@property(readonly, nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (id)description;
- (id)initWithIsInitialized:(_Bool)arg1 isSuccessful:(_Bool)arg2 content:(id)arg3;

@end

