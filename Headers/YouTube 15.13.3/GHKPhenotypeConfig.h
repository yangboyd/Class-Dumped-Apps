//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHTPhenotypeFlags;
@protocol PHTPhenotype;

@interface GHKPhenotypeConfig : NSObject
{
    id <PHTPhenotype> _phenotype;
    NSString *_packageName;
    PHTPhenotypeFlags *_allFlags;
}

+ (id)dispatchQueue;
@property(retain, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (void).cxx_destruct;
- (void)updateFlagsAsyncWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)boolValueForFlag:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)enableStickySearchBar;
- (void)fetchConfiguration;
- (id)init;

@end

