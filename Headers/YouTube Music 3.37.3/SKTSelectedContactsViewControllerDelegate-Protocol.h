//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTSelectedContactsDisplayDelegate-Protocol.h"

@class SKTContact;
@protocol SKTSelectedContactsDisplay;

@protocol SKTSelectedContactsViewControllerDelegate <SKTSelectedContactsDisplayDelegate>
- (unsigned long long)preferredSelectionMode;

@optional
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 didRemoveContact:(SKTContact *)arg2;
@end

