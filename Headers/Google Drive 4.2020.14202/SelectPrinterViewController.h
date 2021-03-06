//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrinterListViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class NSString, PrintData, Printer, UIViewController;

@interface SelectPrinterViewController : PrinterListViewController <UIActionSheetDelegate>
{
    UIViewController *_printViewController;
    PrintData *_printData;
    Printer *_selectedPrinter;
}

@property(retain, nonatomic) Printer *selectedPrinter; // @synthesize selectedPrinter=_selectedPrinter;
@property(retain, nonatomic) PrintData *printData; // @synthesize printData=_printData;
@property(retain, nonatomic) UIViewController *printViewController; // @synthesize printViewController=_printViewController;
- (void)dealloc;
- (void)print;
- (void)saveToPDF;
- (void)declineInvitationForSelectedPrinter;
- (void)acceptInvitationForSelectedPrinter;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithPrintData:(id)arg1;
- (_Bool)handlePrintCompletion:(_Bool)arg1 withError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

