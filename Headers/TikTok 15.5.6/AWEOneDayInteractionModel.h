//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEOneDayInteractionChildViewModel;

@interface AWEOneDayInteractionModel : NSObject
{
    unsigned long long _interactionType;
    AWEOneDayInteractionChildViewModel *_commentVCModel;
    AWEOneDayInteractionChildViewModel *_glanceVCModel;
}

@property(retain, nonatomic) AWEOneDayInteractionChildViewModel *glanceVCModel; // @synthesize glanceVCModel=_glanceVCModel;
@property(retain, nonatomic) AWEOneDayInteractionChildViewModel *commentVCModel; // @synthesize commentVCModel=_commentVCModel;
@property(nonatomic) unsigned long long interactionType; // @synthesize interactionType=_interactionType;
- (void).cxx_destruct;
- (id)init;

@end

