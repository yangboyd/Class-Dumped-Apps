//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface OPAC2LayoutParamsTracker : NSObject
{
    NSMutableDictionary *_transforms;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *transforms; // @synthesize transforms=_transforms;
- (void)applyLayoutParamsTransformsToView:(id)arg1;
- (void)addLayoutParamTransform:(id)arg1 toView:(id)arg2;
- (void)reset;
- (id)init;

@end

