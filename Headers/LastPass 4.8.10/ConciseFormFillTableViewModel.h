//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TableViewModel-Protocol.h"

@class BaseFormFillTableViewModel, NSMutableArray, NSMutableDictionary, NSString;

@interface ConciseFormFillTableViewModel : NSObject <TableViewModel>
{
    NSMutableArray *_sections;
    NSMutableDictionary *_rows;
    BaseFormFillTableViewModel *_innerTableViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseFormFillTableViewModel *innerTableViewModel; // @synthesize innerTableViewModel=_innerTableViewModel;
@property(retain, nonatomic) NSMutableDictionary *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (_Bool)isReadOnlyRowAtIndexPath:(id)arg1;
- (id)humanReadableStringForRowAtIndexPath:(id)arg1;
- (id)choiceValueLabelForRowAtIndexPath:(id)arg1;
- (id)objectForRowAtIndexPath:(id)arg1;
- (id)dateForRowAtIndexPath:(id)arg1;
- (id)stringForRowAtIndexPath:(id)arg1;
- (id)labelForRowAtIndexPath:(id)arg1;
- (id)labelForSection:(long long)arg1;
- (id)typeForRowAtIndexPath:(id)arg1;
- (long long)numRowsInSection:(long long)arg1;
- (long long)numSections;
- (void)buildMapping;
- (id)formFill;
- (id)initWithTableViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

