//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMImageProcessor-Protocol.h"

@class NSString;

@interface YTICreatorHeartImageProcessor : NSObject <ELMImageProcessor>
{
    // Error parsing type: {CreatorHeartImageProcessor="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadataWithArenaLite="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"Ai}}"tint_color_"I"background_color_"I}, name: _processor
}

+ (void)registerImageProcessor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)roundedImage:(id)arg1;
- (id)heartImage;
- (id)modifiedImageForImage:(id)arg1;
-     // Error parsing type: @48@0:8{CreatorHeartImageProcessor=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}II}16, name: initWithProcessor:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

