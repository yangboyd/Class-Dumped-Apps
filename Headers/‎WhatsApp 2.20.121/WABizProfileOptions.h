//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface WABizProfileOptions : NSObject
{
    // Error parsing type: , name: commerceExperience
    // Error parsing type: , name: shopURL
    // Error parsing type: , name: cartEnabled
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProfileOptionsData:(id)arg1;
- (id)initWithXMPPBusinessProfileOptions:(id)arg1;
- (id)initWithCommerceExperience:(id)arg1 shopURLString:(id)arg2 cartEnabled:(_Bool)arg3;
@property(nonatomic, readonly) _Bool cartEnabled; // @synthesize cartEnabled;
@property(nonatomic, readonly) NSURL *shopURL;
@property(nonatomic, readonly) _Bool hasShop;
@property(nonatomic, readonly) _Bool hasCatalog;

@end

