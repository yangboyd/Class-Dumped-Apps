//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, SCLSIDebugInfoMetadata, SCLSIImageData;

@interface SCLSIDebugInfoComponentViewModel : SCComposerMarshallableObject
{
    SCLSIImageData *_image;
    SCLSIDebugInfoMetadata *_metadata;
    NSArray *_analyzerSections;
}

@property(copy, nonatomic) NSArray *analyzerSections; // @synthesize analyzerSections=_analyzerSections;
@property(retain, nonatomic) SCLSIDebugInfoMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SCLSIImageData *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithImage:(id)arg1 metadata:(id)arg2 analyzerSections:(id)arg3;

@end

