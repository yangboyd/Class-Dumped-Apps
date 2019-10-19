//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIPrequerySearchEntity, NSArray, NSMutableArray;

@interface NFUIPrequerySearchViewModel : NSObject
{
    NSMutableArray *_internalPrequeryItems;
    NFUIPrequerySearchEntity *_internalEntity;
}

@property(retain, nonatomic) NFUIPrequerySearchEntity *internalEntity; // @synthesize internalEntity=_internalEntity;
@property(retain, nonatomic) NSMutableArray *internalPrequeryItems; // @synthesize internalPrequeryItems=_internalPrequeryItems;
- (void).cxx_destruct;
- (void)addPrequeryItemEntity:(id)arg1;
@property(readonly, nonatomic) NSArray *prequeryItems;
@property(readonly, nonatomic) _Bool isPrequeryListEmpty;
@property(readonly, nonatomic) unsigned long long safeItemCount;
@property(readonly, nonatomic) NFUIPrequerySearchEntity *entity;
- (id)initWithEntity:(id)arg1;

@end

