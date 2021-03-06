//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthenticationMethodHandlerDelegate-Protocol.h"
#import "FBAuthenticationUserInfoResolverDelegate-Protocol.h"

@class FBAuthPerfLogger, FBAuthenticationAccessTokenValidator, FBAuthenticationDeviceBasedLoginHandler, FBAuthenticationKeychainHandler, FBAuthenticationNonceHandler, FBAuthenticationPageIDPasswordHandler, FBAuthenticationSSOHandler, FBAuthenticationStoredUser, FBAuthenticationUserInfoResolver, FBAuthenticationUsernamePasswordHandler, FBAuthenticationWorkUsernamePasswordHandler, FBRequesterConfiguration, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBAuthenticationManagerDelegate, FBAuthenticationManagerDeviceBasedAccountsDataSource;

@interface FBAuthenticationManager : NSObject <FBAuthenticationMethodHandlerDelegate, FBAuthenticationUserInfoResolverDelegate>
{
    FBRequesterConfiguration *_requesterConfiguration;
    FBAuthPerfLogger *_perfLogger;
    FBAuthenticationAccessTokenValidator *_accessTokenValidator;
    BOOL _isDeviceBasedLoginEnabled;
    id <FBAuthenticationManagerDelegate> _delegate;
    id <FBAuthenticationManagerDeviceBasedAccountsDataSource> _deviceBasedAccountsDataSource;
    unsigned int _method;
    FBAuthenticationSSOHandler *_ssoHandler;
    FBAuthenticationKeychainHandler *_keychainHandler;
    FBAuthenticationUsernamePasswordHandler *_usernamePasswordHandler;
    FBAuthenticationWorkUsernamePasswordHandler *_workUsernamePasswordHandler;
    FBAuthenticationNonceHandler *_nonceHandler;
    FBAuthenticationPageIDPasswordHandler *_pageIDPasswordHandler;
    FBAuthenticationDeviceBasedLoginHandler *_deviceBasedHandler;
    NSMutableDictionary *_authenticationMethodsForUsers;
    FBAuthenticationUserInfoResolver *_userInfoResolver;
    FBAuthenticationStoredUser *_authenticatingUser;
    NSMutableArray *_availableAuthenticationMethods;
}

@property(retain, nonatomic) NSMutableArray *availableAuthenticationMethods; // @synthesize availableAuthenticationMethods=_availableAuthenticationMethods;
@property(retain, nonatomic) FBAuthenticationStoredUser *authenticatingUser; // @synthesize authenticatingUser=_authenticatingUser;
@property(retain, nonatomic) FBAuthenticationUserInfoResolver *userInfoResolver; // @synthesize userInfoResolver=_userInfoResolver;
@property(retain, nonatomic) NSMutableDictionary *authenticationMethodsForUsers; // @synthesize authenticationMethodsForUsers=_authenticationMethodsForUsers;
@property(retain, nonatomic) FBAuthenticationDeviceBasedLoginHandler *deviceBasedHandler; // @synthesize deviceBasedHandler=_deviceBasedHandler;
@property(retain, nonatomic) FBAuthenticationPageIDPasswordHandler *pageIDPasswordHandler; // @synthesize pageIDPasswordHandler=_pageIDPasswordHandler;
@property(retain, nonatomic) FBAuthenticationNonceHandler *nonceHandler; // @synthesize nonceHandler=_nonceHandler;
@property(retain, nonatomic) FBAuthenticationWorkUsernamePasswordHandler *workUsernamePasswordHandler; // @synthesize workUsernamePasswordHandler=_workUsernamePasswordHandler;
@property(retain, nonatomic) FBAuthenticationUsernamePasswordHandler *usernamePasswordHandler; // @synthesize usernamePasswordHandler=_usernamePasswordHandler;
@property(retain, nonatomic) FBAuthenticationKeychainHandler *keychainHandler; // @synthesize keychainHandler=_keychainHandler;
@property(retain, nonatomic) FBAuthenticationSSOHandler *ssoHandler; // @synthesize ssoHandler=_ssoHandler;
@property(readonly, nonatomic) BOOL isDeviceBasedLoginEnabled; // @synthesize isDeviceBasedLoginEnabled=_isDeviceBasedLoginEnabled;
@property(nonatomic) unsigned int method; // @synthesize method=_method;
@property(retain, nonatomic) id <FBAuthenticationManagerDeviceBasedAccountsDataSource> deviceBasedAccountsDataSource; // @synthesize deviceBasedAccountsDataSource=_deviceBasedAccountsDataSource;
@property(nonatomic) __weak id <FBAuthenticationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_checkUsersAndPerformAuthenticationCallback;
- (BOOL)_userRequiresDBLPasscode:(id)arg1;
- (BOOL)_userHasDBLAccount:(id)arg1;
- (void)_requirePasscodeChangeToContinue:(id)arg1;
- (void)_renewNonceForUser:(id)arg1 pin:(id)arg2 nonce:(id)arg3 accessToken:(id)arg4;
- (void)_updateStoredUserDictWithUsername:(id)arg1 userID:(id)arg2 platformTestAppID:(id)arg3 authMethod:(unsigned int)arg4 fullName:(id)arg5 firstName:(id)arg6;
- (void)_updateStoredUsersDictWithDeviceBasedAccounts:(id)arg1;
- (void)_fetchSSOInformation;
- (void)_fetchDeviceBasedAccounts;
- (void)_notifyViewControllerDeviceBasedLoginIsReady;
- (void)_processAuthMethod:(unsigned int)arg1;
- (void)_handleErrorWithDeviceBasedLoginEnabledHandler:(id)arg1 error:(id)arg2;
- (void)_deviceBasedLoginDidAuthenticateWithResponse:(id)arg1 pin:(id)arg2 nonce:(id)arg3;
- (void)_processNextAuthenticationMethod;
- (void)willEnterForeground:(id)arg1;
- (void)authenticationUserInfoResolver:(id)arg1 userInfoResolved:(id)arg2;
- (void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2;
- (void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2;
- (void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(int)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *authToken;
@property(readonly, copy, nonatomic) NSString *userName;
@property(readonly, copy, nonatomic) NSString *fullName;
- (void)skipKeychainOrSSOAuthenticationMethod;
- (BOOL)hasAtLeastOneDeviceBasedLoginAccount;
- (void)onLoginSettingAction;
- (void)useUsernamePasswordLogin;
- (void)usePageLogin;
- (void)fallBackToUsernameAndPassword;
- (void)logoutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_submitDeviceBasedLoginWithUserID:(id)arg1 nonce:(id)arg2 pin:(id)arg3;
- (void)submitDeviceBasedLoginWithUser:(id)arg1 pin:(id)arg2 attempts:(int)arg3;
- (void)submitUsername:(id)arg1 nonce:(id)arg2 nonceType:(int)arg3;
- (void)submitUser:(id)arg1 credential:(id)arg2;
- (void)submitWorkUsername:(id)arg1 credential:(id)arg2;
- (void)submitUsername:(id)arg1 credential:(id)arg2 credentialType:(int)arg3;
- (void)submitPageID:(id)arg1 credential:(id)arg2;
- (void)continueSSOLoginAndRemoveDeviceBasedAccount;
- (void)submitKeychainOrSSOApproval;
- (void)performAuthenticationWithFBAuthenticationStoredUser:(id)arg1;
- (void)performAuthentication;
- (void)dealloc;
- (id)initWithRequesterConfiguration:(id)arg1 deviceBasedLoginEnabled:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

