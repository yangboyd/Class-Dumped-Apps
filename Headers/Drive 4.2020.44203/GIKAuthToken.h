//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface GIKAuthToken : NSObject
{
    NSString *_token;
    NSDate *_expiration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (id)initWithToken:(id)arg1 expiration:(id)arg2;

@end

