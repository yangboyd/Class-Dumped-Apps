//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>

@class IGCanvasElementContext, NSArray, NSUUID, UIColor;

@interface IGCanvasSwipeUpViewModel : NSObject <IGListDiffable>
{
    NSUUID *_diffIdentifier;
    _Bool _hideGradient;
    UIColor *_backgroundColor;
    NSArray *_actionLinks;
    IGCanvasElementContext *_elementContext;
}

@property(readonly, nonatomic) _Bool hideGradient; // @synthesize hideGradient=_hideGradient;
@property(readonly, nonatomic) IGCanvasElementContext *elementContext; // @synthesize elementContext=_elementContext;
@property(readonly, nonatomic) NSArray *actionLinks; // @synthesize actionLinks=_actionLinks;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithBackgroundColor:(id)arg1 actionLinks:(id)arg2 elementContext:(id)arg3 hideGradient:(_Bool)arg4;

@end

