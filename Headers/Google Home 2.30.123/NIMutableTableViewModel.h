//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NITableViewModel.h"

@protocol NIMutableTableViewModelDelegate;

@interface NIMutableTableViewModel : NITableViewModel
{
}

- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_setSectionsWithArray:(id)arg1;
- (id)_insertSectionAtIndex:(unsigned long long)arg1;
- (id)_appendSection;
- (void)updateSectionIndex;
- (id)removeSectionAtIndex:(unsigned long long)arg1;
- (id)insertSectionWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)addSectionWithTitle:(id)arg1;
- (id)removeObjectAtIndexPath:(id)arg1;
- (id)insertObject:(id)arg1 atRow:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (id)addObjectsFromArray:(id)arg1;
- (id)addObject:(id)arg1 toSection:(unsigned long long)arg2;
- (id)addObject:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <NIMutableTableViewModelDelegate> delegate; // @dynamic delegate;

@end

