//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/JWTStringCoder__Protocol-Protocol.h>

@class NSString;

@interface JWTStringCoder__For__Encoding : NSObject <JWTStringCoder__Protocol>
{
    unsigned long long _stringEncoding;
}

+ (id)utf8Encoding;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (id)dataWithString:(id)arg1;
- (id)stringWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

