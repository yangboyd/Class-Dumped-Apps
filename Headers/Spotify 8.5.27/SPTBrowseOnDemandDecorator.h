//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTOnDemandSet;

@interface SPTBrowseOnDemandDecorator : NSObject
{
    id <SPTOnDemandSet> _onDemandSet;
}

@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
- (void).cxx_destruct;
- (void)applyOnDemandDecorationToViewModelBuilder:(id)arg1;
- (void)decorateComponentModelBuilders:(id)arg1;
- (id)initWithOnDemandSet:(id)arg1;

@end

