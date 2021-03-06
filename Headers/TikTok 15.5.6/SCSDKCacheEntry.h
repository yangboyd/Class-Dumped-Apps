//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SCSDKCreativeKit/NSSecureCoding-Protocol.h>

@protocol NSSecureCoding;

@interface SCSDKCacheEntry : NSObject <NSSecureCoding>
{
    id <NSSecureCoding> _data;
    double _expirationSeconds;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double expirationSeconds; // @synthesize expirationSeconds=_expirationSeconds;
@property(readonly, nonatomic) id <NSSecureCoding> data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 expirationSeconds:(double)arg2;

@end

