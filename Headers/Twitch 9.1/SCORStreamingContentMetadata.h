//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComScore/SCORStreamingAssetMetadata.h>

@interface SCORStreamingContentMetadata : SCORStreamingAssetMetadata
{
    shared_ptr_4497e35b _contentMetadata;
}

+ (id)contentMetadataWithBuilder:(id)arg1;
+ (id)contentMetadataWithBuilderBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) shared_ptr_4497e35b contentMetadata; // @synthesize contentMetadata=_contentMetadata;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCppContentMetadata:(shared_ptr_4497e35b)arg1;

@end

