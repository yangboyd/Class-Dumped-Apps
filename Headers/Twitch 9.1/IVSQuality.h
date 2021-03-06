//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IVSQuality : NSObject
{
    struct Quality _cxxValue;
    NSString *_name;
    NSString *_codecs;
}

+ (id)validatingCxxValue:(const struct Quality *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToQuality:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) float framerate;
@property(readonly, nonatomic) long long bitrate;
@property(readonly, nonatomic) NSString *codecs; // @synthesize codecs=_codecs;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (const struct Quality *)cxxValue;
- (id)initWithCxxValue:(const struct Quality *)arg1;

@end

