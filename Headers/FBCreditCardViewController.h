//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBCreditCardTableViewDelegate-Protocol.h"
#import "FBCreditCardViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBAddCreditCardRequest, FBBezelView, FBCreditCardHeaderCell, FBUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBCreditCardViewControllerDelegate, FBNetworkerRequestStatus, FBPaymentsCreditCard;

@interface FBCreditCardViewController : UIViewController <UITextFieldDelegate, FBCreditCardTableViewDelegate, UITableViewDataSource, FBCreditCardViewController>
{
    FBCreditCardHeaderCell *_creditCardHeaderCell;
    FBCreditCardHeaderCell *_billingAddressHeaderCell;
    NSString *_unformattedCreditCardNumber;
    NSString *_unformattedCreditCardExpiration;
    BOOL _cameraCaptureOn;
    BOOL _captureShown;
    BOOL _showZipCode;
    BOOL _showFullName;
    BOOL _showBillingAddress;
    BOOL _isAdsFundingSource;
    BOOL _didRotate;
    _Bool _showDisclaimer;
    BOOL _isRedirectFlow;
    BOOL _enableCameraCapture;
    BOOL _captureOnStart;
    id <FBPaymentsCreditCard> _creditCard;
    NSMutableDictionary *_validationErrors;
    NSString *_adAccountID;
    FBAddCreditCardRequest *_addRequest;
    id <FBNetworkerRequestStatus> _addRequestStatus;
    FBBezelView *_loadingView;
    FBUserSession *_session;
    id <FBCreditCardViewControllerDelegate> _delegate;
    NSArray *_tableRowDescriptions;
    NSMutableArray *_dataCells;
    NSString *_association;
    NSString *_country;
}

+ (id)_stripNonNumbers:(id)arg1;
@property(nonatomic) BOOL captureOnStart; // @synthesize captureOnStart=_captureOnStart;
@property(nonatomic) BOOL enableCameraCapture; // @synthesize enableCameraCapture=_enableCameraCapture;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *association; // @synthesize association=_association;
@property(retain, nonatomic) NSMutableArray *dataCells; // @synthesize dataCells=_dataCells;
@property(retain, nonatomic) NSArray *tableRowDescriptions; // @synthesize tableRowDescriptions=_tableRowDescriptions;
@property(nonatomic) BOOL isRedirectFlow; // @synthesize isRedirectFlow=_isRedirectFlow;
@property(nonatomic) _Bool showDisclaimer; // @synthesize showDisclaimer=_showDisclaimer;
@property(nonatomic) __weak id <FBCreditCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL didRotate; // @synthesize didRotate=_didRotate;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBBezelView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) id <FBNetworkerRequestStatus> addRequestStatus; // @synthesize addRequestStatus=_addRequestStatus;
@property(retain, nonatomic) FBAddCreditCardRequest *addRequest; // @synthesize addRequest=_addRequest;
@property(copy, nonatomic) NSString *adAccountID; // @synthesize adAccountID=_adAccountID;
@property(nonatomic) BOOL isAdsFundingSource; // @synthesize isAdsFundingSource=_isAdsFundingSource;
@property(nonatomic) BOOL showBillingAddress; // @synthesize showBillingAddress=_showBillingAddress;
@property(nonatomic) BOOL showFullName; // @synthesize showFullName=_showFullName;
@property(nonatomic) BOOL showZipCode; // @synthesize showZipCode=_showZipCode;
@property(retain, nonatomic) NSMutableDictionary *validationErrors; // @synthesize validationErrors=_validationErrors;
@property(retain, nonatomic) id <FBPaymentsCreditCard> creditCard; // @synthesize creditCard=_creditCard;
- (void).cxx_destruct;
- (void)creditCardTableViewDidChangeContentSize:(id)arg1;
- (BOOL)fb_showBackArrowButton;
- (BOOL)fb_showNavigationJewels;
- (struct CGSize)contentSizeForViewInPopover;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)orientationChanged:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)manuallyRotateLoadingView;
- (void)hideLoadingViewWithSuccessMessage:(BOOL)arg1;
- (void)showLoadingView;
- (void)_moveToNextField:(id)arg1;
- (BOOL)validateCreditCardBillingInfo:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreditCardFullName:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreditCardState:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreditCardZipCode:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreditCardSecurityCode:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreditCardExpirationCell:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreditCardNumberCell:(id)arg1 error:(id *)arg2;
- (id)analyticsModule;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 data:(id)arg4;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)_formattedCityState:(id)arg1;
- (id)_formattedAddress:(id)arg1;
- (id)_formattedName:(id)arg1;
- (id)_formattedZipCode:(id)arg1;
- (id)_formattedExpiration:(id)arg1;
- (id)_addCreditCardNumberDividers:(id)arg1;
- (void)_addCreditCardNumberSection:(id)arg1 originalNumber:(id)arg2 currentIndex:(int)arg3 sectionLength:(int)arg4 isLastSection:(BOOL)arg5;
- (id)generateErrorsMessage;
- (void)_displayErrorMessage;
- (BOOL)_updateError:(id *)arg1 fromField:(id)arg2 withCode:(int)arg3;
- (void)_updateGenericErrorWithCode:(int)arg1;
- (void)saveCreditCard:(id)arg1;
- (void)configureCardNumberButton;
- (float)desiredHeight;
- (id)_generateRowDescriptions;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tableView;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 isRedirectFlow:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

