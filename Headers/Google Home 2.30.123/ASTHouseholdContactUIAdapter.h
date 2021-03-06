//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTSelfContactViewDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"

@class ASTMenuContentViewStreamItem, ASTUIPeopleMember, ASTUIYourPeopleV2SettingsUi_RelationshipList, CNContact, NSMutableArray, NSString;

@interface ASTHouseholdContactUIAdapter : ASTSettingsUIAdapter <ASTSelfContactViewDelegate, CNContactPickerDelegate>
{
    _Bool _triggerAddPersonFlow;
    int _personIndex;
    NSMutableArray *_personV2Array;
    NSMutableArray *_householdContactArray;
    ASTMenuContentViewStreamItem *_selfContentItem;
    ASTUIPeopleMember *_member;
    CNContact *_contact;
    ASTUIYourPeopleV2SettingsUi_RelationshipList *_relationshipList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASTUIYourPeopleV2SettingsUi_RelationshipList *relationshipList; // @synthesize relationshipList=_relationshipList;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) ASTUIPeopleMember *member; // @synthesize member=_member;
@property(retain, nonatomic) ASTMenuContentViewStreamItem *selfContentItem; // @synthesize selfContentItem=_selfContentItem;
@property(nonatomic) int personIndex; // @synthesize personIndex=_personIndex;
@property(retain, nonatomic) NSMutableArray *householdContactArray; // @synthesize householdContactArray=_householdContactArray;
@property(retain, nonatomic) NSMutableArray *personV2Array; // @synthesize personV2Array=_personV2Array;
@property(nonatomic) _Bool triggerAddPersonFlow; // @synthesize triggerAddPersonFlow=_triggerAddPersonFlow;
- (void)tapAddYourselfButton;
- (void)tapCancelButton;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)addContact;
- (void)addSelf;
- (void)showContactPicker;
- (void)addPerson;
- (void)didTapRemoveButton:(id)arg1;
- (id)personStreamItemWithPerson:(id)arg1;
- (id)personStreamItemsWithPersonArray:(id)arg1;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)settingsFilter;
- (id)pageCustomizations;
- (id)initWithSettingsService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

