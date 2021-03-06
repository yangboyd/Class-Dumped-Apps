//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKCollectionCellModel-Protocol.h"

@class NSString;

@interface GDKCategoryHeaderCellModel : NSObject <GDKCollectionCellModel>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_categoryDescription;
}

@property(readonly, nonatomic) NSString *categoryDescription; // @synthesize categoryDescription=_categoryDescription;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (Class)cellClass;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

