//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface WABlockReasonsList : NSObject <NSSecureCoding>
{
    long long _version;
    NSString *_language;
    NSString *_country;
    NSArray *_blockReasons;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *blockReasons; // @synthesize blockReasons=_blockReasons;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReasons:(id)arg1 version:(long long)arg2 language:(id)arg3 country:(id)arg4;

@end

