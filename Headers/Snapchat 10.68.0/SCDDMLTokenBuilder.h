//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCDDMLTokenBuilder : NSObject
{
    NSString *_token;
    NSDate *_expiration;
}

+ (id)withDDMLToken:(id)arg1;
- (void).cxx_destruct;
- (id)setExpiration:(id)arg1;
- (id)setToken:(id)arg1;
- (id)build;

@end

