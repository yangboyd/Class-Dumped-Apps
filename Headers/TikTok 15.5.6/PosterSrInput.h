//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet, NSString;

@interface PosterSrInput : NSObject <MLFeatureProvider>
{
    NSString *_inputName;
    MLMultiArray *_Placeholder__0;
}

@property(retain, nonatomic) MLMultiArray *Placeholder__0; // @synthesize Placeholder__0=_Placeholder__0;
@property(retain, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithMLMultiArray:(id)arg1 inputName:(id)arg2;
- (id)init;

@end

