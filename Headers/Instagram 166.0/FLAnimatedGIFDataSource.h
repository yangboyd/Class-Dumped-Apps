//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FLAnimatedImageFrameDataSource-Protocol.h>

@class NSString;

@interface FLAnimatedGIFDataSource : NSObject <FLAnimatedImageFrameDataSource>
{
    struct CGImageSource *_imageSource;
    _Bool _predrawingEnabled;
}

+ (id)predrawnImageFromImage:(id)arg1;
@property(readonly, nonatomic, getter=isPredrawingEnabled) _Bool predrawingEnabled; // @synthesize predrawingEnabled=_predrawingEnabled;
- (id)blendImage:(id)arg1 atIndex:(unsigned long long)arg2 withPreviousImage:(id)arg3;
- (_Bool)frameRequiresBlendingWithPreviousFrame:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithImageSource:(struct CGImageSource *)arg1 predrawingEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

