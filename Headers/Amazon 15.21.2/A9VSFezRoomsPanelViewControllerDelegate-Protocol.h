//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezRoom, NSArray, NSError, NSIndexPath, NSString;

@protocol A9VSFezRoomsPanelViewControllerDelegate <NSObject>
- (void)didFailToLoadRoomsWithError:(NSError *)arg1;
- (void)didLoadRooms:(NSArray *)arg1;
- (void)willLoadRooms;
- (void)didConfirmRoomDeletion;
- (void)didActivateDeleteRoomButton;
- (void)deleteRoomDidFail:(A9VSFezRoom *)arg1;
- (void)didDeleteRoomWithIdentifier:(NSString *)arg1 withNextRoomToLoad:(A9VSFezRoom *)arg2 numberOfAvailableRooms:(unsigned long long)arg3;
- (void)didSelectRoom:(A9VSFezRoom *)arg1 atIndexPath:(NSIndexPath *)arg2 onSelectionCompletion:(void (^)(void))arg3;
@end

