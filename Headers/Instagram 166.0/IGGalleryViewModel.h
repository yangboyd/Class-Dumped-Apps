//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSSet;

@interface IGGalleryViewModel : NSObject <NSCopying>
{
    NSArray *_mediaShells;
    NSArray *_reelShells;
    NSSet *_supplementaryFragments;
}

+ (id)newWithMediaShells:(id)arg1 reelShells:(id)arg2 supplementaryFragments:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *supplementaryFragments; // @synthesize supplementaryFragments=_supplementaryFragments;
@property(readonly, copy, nonatomic) NSArray *reelShells; // @synthesize reelShells=_reelShells;
@property(readonly, copy, nonatomic) NSArray *mediaShells; // @synthesize mediaShells=_mediaShells;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithMediaShells:(id)arg1 reelShells:(id)arg2 supplementaryFragments:(id)arg3;

@end

