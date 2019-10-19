//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FABIcon : NSObject
{
    _Bool _prerendered;
    NSData *_data;
    NSString *_dataHash;
    struct CGSize _size;
}

+ (_Bool)isWithinMaxSurfaceAreaWithImage:(id)arg1;
@property(nonatomic) _Bool prerendered; // @synthesize prerendered=_prerendered;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *dataHash; // @synthesize dataHash=_dataHash;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)largerThanSize:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool isWithinMaxSurfaceArea;
@property(readonly, nonatomic) double surfaceArea;
- (id)initWithPNGImageAtPath:(id)arg1 size:(struct CGSize)arg2 prerendered:(_Bool)arg3;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2 prerendered:(_Bool)arg3;
- (id)initWithData:(id)arg1 dataHash:(id)arg2 size:(struct CGSize)arg3 prerendered:(_Bool)arg4;

@end

